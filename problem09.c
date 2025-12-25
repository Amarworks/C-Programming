#include <stdio.h>
#include <math.h>

int main()
{
 int a = 2, b = 2, c = 4;
 float s = (a + b + c) / 2.0;

 float area_of_triangle = sqrt(s * (s - a) * (s - b) * (s - c));

 printf("AREA OF TRIANGLE: %f\n", area_of_triangle);
 return 0;
}

