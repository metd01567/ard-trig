# ard-trig
a bit of trig for arduino

Two functions are provided in ard-trig.c: xyToNorthUpDegrees and degToLED.  Feel free to copy and modify.  ard-trig.h provides the prototypes for the two functions.  ard-trig-ut.c is a unit test but can also be used to convert specified x/y to integer degrees and an led ID.

Compile:
   cc -o ard-trig ard-trig-ut.c ard-trig.c

Run the unit test:
   ard-trig
   
Convert a number:
   ard-trig x y
   
   where x and y are floating point numbers - e.g. the x and y values from an accelerometer
   
   A line is printed with the integer decimal degrees (clockwise from North), and an led id between 0 and 11
