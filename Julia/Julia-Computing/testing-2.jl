using Pkg

using CuArrays
using Test
using CUDAnative
using BenchmarkTools


function values_hello(v, w, s, d)
        dot_v = v - (v * v * v)/3 - w + 0.01
        dot_w = 0.08(v + 0.7 - 0.8w)
        for i = 1:1000
            v += dot_v * 0.5
            w += dot_w * 0.5
            cupush!(s, v)
            cupush!(d, v)
        end
end

function values_hello1(v, w)
    @inbounds v0 = 0.0
    @inbounds w0 = 0.0
    for i = 1:100
            @inbounds dot_v = v0 - (v0 * v0 * v0)/3 - w0 + 0.5
            @inbounds dot_w = 0.08(v0 + 0.7 - 0.8*w0)
            @inbounds v[i] = v0 + dot_v * 0.5
            @inbounds w[i] = w0+ dot_w * 0.5
            @inbounds v0 = v[i]
            @inbounds w0 = w[i]
    end
end


#alues_hello(0,0,V,W)

#println(V)
# @btime values_hello1(0,0)

x_d = cuzeros(Float64, 100)
y_d = cuzeros(Float64, 100)

@btime @cuda values_hello1(x_d, y_d)

println(x_d)

println(y_d)
