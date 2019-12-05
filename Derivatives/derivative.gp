set grid
plot[0:2*pi] sin(x)*sin(x)*cos(x)*cos(x)
replot"derivative.dat" every ::1 using 1:2 with lines title "sin(x) (num)"
replot"derivative.dat" every ::1 using 1:3 with lines title "cos(x) (num)"
