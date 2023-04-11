#include "main.h"

/**
 * _pow - calculate base
 * @base: base
 * @power: power
 * Return: value of power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int git;
	unsigned int i;

	git = 1;
	for (i = 1; i <= power; i++)
		git *= base;
	return (git);
}

/**
 * print_binary - prints number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
