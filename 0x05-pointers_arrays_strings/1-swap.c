#include <stdio.h>

/**
 * swap_int - swap the values of intergers
 * @a:The first interger to be swapped
 * @b: Second interger to swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that waps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
