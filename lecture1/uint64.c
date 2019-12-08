#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/* uint64 converting BigEndian to SmallEndian
 12345678 is order of bytes in the number */
int main (void)
{
	uint64_t x = 268435456;
	printf("bigEndian uint64_t  is  " "%" PRIu64, x);
	x = ((x << 8) & 0xFF00FF00FF00FF00 ) | ((x >> 8) & 0x00FF00FF00FF00FF ); //12345678 -> 21436587
	x = ((x << 16) & 0xFFFF0000FFFF0000 ) | ((x >> 16) & 0x0000FFFF0000FFFF ); // -> 4321 8765
	x = (x << 32) | (x >> 32); // >>43210000 | 00008765<< -> 87654321
	printf("\nif you read SmallEndian as BigEndian you will heave: " "%" PRIu64, x);
	return 0;
}