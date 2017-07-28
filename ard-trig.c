#include <math.h>

/////////////////////////////////////////////
//
// xyToNorthUpDegrees
//
//   converts cartesian x/y to decimal degrees.
//
// x: magnitude in x axis
// y: magnitude in y axis
//
// return value: integer degrees from North, clockwise
//
int xyToNorthUpDegrees(double x, double y)
{
   /////////////////////////////
   // get the angle in radians
   double arcTanRadians = atan2(y, x);

   /////////////////////////////
   //
   // PI radians is 180 degrees (semicircle),
   // and they go counterclockwise from East,
   // vs the desired clockwise from North

   // convert the units
   double arcTanDegrees = arcTanRadians * 180.0 / M_PI;

   // switch to clockwise, since radians go counterclockwise
   arcTanDegrees = -arcTanDegrees;

   // atan2 inconveniently returns negative numbers past 180, make them positive
   if(arcTanDegrees < 0)
   {
      arcTanDegrees += 360.0;
   }

   // correct origin to North-up
   arcTanDegrees += 90.0;
   
   // convert to integer, rounding up
   int arcTan360 = (int)(arcTanDegrees + 0.5);

   // the approach above can wrap a circle, modulus operator clamps it
   arcTan360 %= 360;
   
   return arcTan360;
}

/////////////////////////////////////////////
//
// degreesToLED
//
//   converts North up degrees to an LED number
//
// degrees: integer angle from North, clockwise
//
// return value: integer LED number
//
#define STEP_COUNT 12
#define STEP_SIZE (360/STEP_COUNT)

int degreesToLED(int degrees)
{
   // round up 
   int led = (degrees + STEP_SIZE/2) / STEP_SIZE;

   // clamp
   led %= STEP_COUNT;

   return led;
}

