
#include <stdio.h>
/*Calculating perimeter and area of arbitrary size (without input checking )*/
float i(float x)
{
	return(x * 39.3700787); // converting meters to inches
}

int main(void)
{
	float a, b;
	printf("Pleuse use \".\" symbol for split fractional part of the number\n");
	printf("Input height of rectangle, m:\n ");
	scanf("%f", &a);
	a = i(a); // convert to inches
	printf("Input weight of rectangle, m:\n ");
	scanf("%f", &b);
	b = i(b);
	printf("Perimeter: %.2f inches\n", (2 * a + 2 * b)); //lenght of number after . is limited
	printf("Area: %.2f inches", (a * b));
    return 0;
}