#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: Array fo integers
 * @n: Number of element of the array to be printed
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
