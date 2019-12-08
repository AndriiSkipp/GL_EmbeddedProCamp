#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/* uint16 converting BigEndian to SmallEndian */
int main (void)
{
	int a = 0;
	uint16_t x = 0;
	printf("input 16 bit number between 0 and 65535 \n");
	scanf("%d", &a); // не зміг поки вияснити як завести uint вручну
	x = a;
	printf("bigEndian  is  " "%" PRIu16, x);
	x = (x << 8)|(x >> 8); //маскувати не треба - зайве вийде "за край"	
	printf("\nif you read SmallEndian as BigEndian you will heave: " "%" PRIu16, x);
	return 0;
}