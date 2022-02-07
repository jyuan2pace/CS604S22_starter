/*  Example: C program to find area of a circle */

#include <stdio.h>

int main()
{

  float radiusMil, radiusIn, areaIn, circIn;
  printf("Enter radius (in mm):\n");
  scanf("%f", &radiusMil);

  //DO NOT touch the code above this line
  //TODO: Follow the step-by-step "TODO" comments below. The variables have already been declared for you (see line 8) and the user has input a radius to be stored in radiusMil (see line 10)
  while (???) {
    //TODO: convert radiusMil(in mm) to radiusIn(in inch)
    /**your code here**/
    
    //TODO: then calculate the area(stored in areaIn) and circumference(stored in circIn) (in inch) (you can assume pi = 3.14)
    /**your code here**/

    printf("Circle's area is %3.2f (sq in).\n", areaIn);
    printf("Its circumference is %3.2f (in).\n", circIn);

    //TODO: when user enters zero, exit the loop. When user enters any other number, store it in radiusMil again, loop back, continue to calculate area and circumference (in inch)
    /**your code here**/

    //TODO: replace ??? in line 14 so the loop runs as intended

  }
 
  return 0;

}
