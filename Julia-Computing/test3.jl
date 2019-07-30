using PyPlot
ion()
fig = figure()
ax = fig[:add_subplot](111)
img = ax[:imshow]
show
for i in 1:10
    # wait for a second
    sleep(1)
    # replace the image contents
    img[:set_array](rand(50,50))
    # redraw the figure
    fig[:canvas][:draw]
end
