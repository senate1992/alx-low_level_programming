#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets value to clear
 * @n: parameter
 * @index: index
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= -(1 << index);
	return (1);
}
