#include "main.h"

/**
 * flip_bits - counts number
 * @n: first number
 * @m: second number
 * Return: number to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, c = 0;
	unsigned long int current;
	unsigned long int git = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = git >> p;
		if (current & 1)
			c++;
	}

	return (c);
}
