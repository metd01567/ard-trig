# ard-trig
a bit of trig for AdaFruit arduino.  Work in progress, e.g. I don't know the led layout.  And I don't have an arduino yet I'm just running a unit test program on my macbook.

Bugs/enhancements
- I calculated based on 12 positions (30 degrees apart).  I don't think that's correct since some of the 12 positions don't have leds.
- find out if the led ids are indexed from zero or one
- some of the led positions are not used, so those should be skipped, or maybe light the two adjacent when that happens.

Two functions are provided in ard-trig.c: xyToNorthUpDegrees and degToLED.  Feel free to copy and modify.  

ard-trig.h provides the prototypes for the two functions.  ard-trig-ut.c is a unit test but can also be used to convert specified x/y to integer degrees and an led ID.

Compile:
   cc -o ard-trig ard-trig-ut.c ard-trig.c

Run the unit test:
   ard-trig
   
Convert a number:
   ard-trig x y
   
   where x and y are floating point numbers - e.g. the x and y values from an accelerometer
   
   A line is printed with the integer decimal degrees (clockwise from North), and an led id between 0 and 11
