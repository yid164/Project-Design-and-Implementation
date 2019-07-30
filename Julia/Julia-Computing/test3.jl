using CuArrays
using Test
using CUDAnative
using BenchmarkTools

struct test_expr
    expr_name :: String
    this_expr :: Expr
end

expr_name = "testing"
prog_expr = "a + b + c"
ex = Meta.parse(prog_expr)
a_expr = test_expr(expr_name, ex)

println(a_expr)

a = 1

b = 3

c = 5

println(eval(ex))

N = 60000
x_d = zeros(N)

println(length(x_d))

function a_fuc(x_d, program)
    for i = 1:10
        a = 0
        b = 2
        c = 3
        z = Float32(eval(program.this_expr))
        println(typeof(z))
    end
    return x_d
end



y_d = cuzeros(N)
function gpu_fuc(y_d, program)
    for i = 1:length(y_d)
        a = 0
        b = 3
        c = 7
        z = Float32(eval(program.this_expr))
        @inbounds cupush!(y_d, z)
    end
    return nothing
end

@cuda gpu_fuc(y_d, test_expr)
