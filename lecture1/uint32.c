#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/* uint32 converting BigEndian to SmallEndian 
1234 is order of bytes in the number */

int main (void)
{
	uint32_t x = 268435456;
	printf("bigEndian uint32_t  is  " "%" PRIu32, x);
	x = ((x << 8) & 0xFF00FF00 ) | ((x >> 8) & 0x00FF00FF ); // 1234-> 2040 | 0103 ->2143 
	x = (x << 16) | (x >> 16); // >>21 | 43<<  -> 43 21	
	printf("\nif you read SmallEndian as BigEndian you will heave: " "%" PRIu32, x);
	return 0;
}