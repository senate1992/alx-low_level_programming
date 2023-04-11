#include "main.h"

/**
 * get_bit - returns the value
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}
