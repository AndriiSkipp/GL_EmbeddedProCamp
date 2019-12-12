#include <stdio.h>
/*Factorial of 10 calculating*/
int main(void)
{
	int size = 10; // number of iterations
	long b = 1; // result accumulator.
	while(size > 0)
	{
		b = b * size; // I reverse order in the multipliers, result the same 
		size = size - 1; // from top
	}
	printf("facorial of 10 is %ld", b);
return 0;
}