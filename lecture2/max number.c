#include <stdio.h>
int max_of(int *, unsigned); //prototype
 /*   function to find the biggest element in integer array */
int main(void)
{
   	unsigned sz; // size of array
	unsigned i = 0; //  index of array for input
	printf("Input size of array:\n");
	scanf("%d", &sz);
	int arr1[sz];
	printf("Input numbers of array:\n");
	while(i < sz) // fill array while not full
	{
        printf("№%d : ", i);
        scanf("%d", &arr1[i]); // manual input of array elements
        i++;
	}

    printf("\nmaximum numeric is: %d", max_of(arr1, sz));  

    return 0;
}

int  max_of(int *arr, unsigned size)
{
	unsigned i; // index for serching biggest numeric
	int max = arr[0]; // initialised with first element of array
	for (i = 1 ; i < size ; i++)
	{
	    if (arr[i] > max) // comparision between max and new element
	    {
	    max = arr[i]; //  if biggest new element, do remeber
	    }
	}
	return max; // sending result. The last of remembered is biggest.
}