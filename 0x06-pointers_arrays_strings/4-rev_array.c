#include "main.h"

/**
 * reverse_array - The function reverses content of an array
 * @a: The array of integer
 * @n: The number of element in the array
 */

void reverse_array(int *a, int n)

{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}
