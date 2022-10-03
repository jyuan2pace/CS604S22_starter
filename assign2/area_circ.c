// calculate Area and Circumference of a circle

#include<stdio.h>
int main()
{
    float r;
    printf("enter radius :\n");
    scanf("%f", &r);
    //r stores radius 
    //TODO: 1. declare a variable a to hold area and a variable c to hold circumference
    //TODO  2. calculate and store area into a and circumference into c (you can assume pi = 3.14)
    float a,c;
    a = 3.14*r*r;
    c = 2*.3.14*r;
    printf("Area = %f circumference = %f\n",a,c);
    return 0;
}
