
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
int xyToNorthUpDegrees(double x, double y);

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

int degreesToLED(int degrees);

