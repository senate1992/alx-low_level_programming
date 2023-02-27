#include <stdio.h>

/**
 * swap_int - swap the values of intergers
 * @n:The first interger to be swapped
 * @b: Second interger to swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
