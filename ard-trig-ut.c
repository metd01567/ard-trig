#include <stdio.h>
#include <stdlib.h>

#include "ard-trig.h"

void unitTest(void)
{
   ////////////////////////////////////////////////////
   printf("\n\nconversion test\n\n");
   int deg = 0.0;

   //////////////////////////
   printf("\nquadrant 1\n");
   printf ("North    : ");
   deg=xyToNorthUpDegrees(1.0, 1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("Northeast: ");
   deg=xyToNorthUpDegrees(1000.0, 1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("East     : ");
   deg=xyToNorthUpDegrees(1000.0, 1.0);
   printf("degrees returned: %d\n\n", deg);

   //////////////////////////
   printf("\nquadrant 2\n");
   printf ("East     : ");
   deg=xyToNorthUpDegrees(1000.0, -1.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("Southeast: ");
   deg=xyToNorthUpDegrees(1000.0, -1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("South    : ");
   deg=xyToNorthUpDegrees(1.0, -1000.0);
   printf("degrees returned: %d\n\n", deg);

   //////////////////////////
   printf("\nquadrant 3\n");
   printf ("South    : ");
   deg=xyToNorthUpDegrees(-1.0, -1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("Southwest: ");
   deg=xyToNorthUpDegrees(-1000.0, -1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("West     : ");
   deg=xyToNorthUpDegrees(-1000.0, -1.0);
   printf("degrees returned: %d\n\n", deg);

   //////////////////////////
   printf("\nquadrant 4\n");
   printf ("West     : ");
   deg=xyToNorthUpDegrees(-1000.0, 1.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("Northwest: ");
   deg=xyToNorthUpDegrees(-1000.0, 1000.0);
   printf("degrees returned: %d\n\n", deg);

   printf ("North    : ");
   deg=xyToNorthUpDegrees(-1.0, 1000.0);
   printf("degrees returned: %d\n\n", deg);

   ////////////////////////////////////////////////////
   printf("\n\nled test\n\n");

   for(int deg=0; deg < 360; deg++)
   {
      int led=degreesToLED(deg);
      printf("led id: %d for %d degrees\n", led, deg);
   }

}

int main(int argc, char **argv)
{
   // if two params were passed, convert to angle/id
   if(argc == 3)
   {
      printf("x/y provided, converting\n");

      double x = atof(argv[1]);
      double y = atof(argv[2]);

      int deg = xyToNorthUpDegrees (x, y);
      int led = degreesToLED(deg);
      printf("\nfor x=%lf, y=%lf; angle=%d, led id=%d\n",
         x, y, deg, led);
   }
   else
   {
      // otherwise run the full test
      unitTest();
   }

}

