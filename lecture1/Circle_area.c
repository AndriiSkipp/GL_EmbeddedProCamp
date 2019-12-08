#include <stdio.h>
/* Calculating perimeter and area for circle 6m*/

#define Pi 3.141592653 //  PI without using match.h,less memory usage

int main(void)
{
	float r = 6.0; // radius of circle in meters
	printf("The radius of circle is 6m.\n");
	printf("Perimeter is %.4fm\n", (2 * Pi * r)); // perimeter in meters
	printf("Area is %.4fm\n", (r * r * Pi));       // area in meters

    return 0;
}
