/*Nunbers divider*/
#include <stdio.h>

int main(void)
{
	int a = 500; // number of iterations
	float b = 0; // user difined number
	int i; // counter
	printf("Pleuse use \".\" symbol for split fractional part of the number\n");
	printf("input your number:\n");
	scanf("%f", &b);
	printf("\n Divided nubers are:\n");
	   for(i = 1; i <= a; i++ ) // prepare devided number "i" in a cycle
	{
		printf("%d / %.3f = %.3f\n", i, b, (i / b)); // do operation and outp. of result
		
	}

    return 0;
}