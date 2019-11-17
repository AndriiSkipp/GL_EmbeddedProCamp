
#include <stdio.h>
#include <string.h>
/* function to copy all digits from input string to output string */

int main(void)
{
    int max;
    int i;
    char str1[10] = {'5','7','n','g','4','9','d','2','0','\0'}; // variant char str1[10] = "5g7f7g8k3";
    printf("Input string is %s", str1);
    max = sizeof(str1); // input string can be different. char=1byte
    printf("\nString size is %d symbols \n", max);
    char str2[max]; // created the same long string
    
    for (i = 0; i < max; i++) // elements of primary sring
        {
            if(str1[i] < 58) // higher 57 are letters - no need
            str2[i] = str1[i]; // copied if digit the same plase  to str2 (saved position in string)
            else
            str2[i] = 32; // fill with space symbols empty places (zeros will be stops output)
        }
        printf("\n%s", str2); // in result letters are replaced by space
        return 0;
}