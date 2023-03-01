#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
	int i = 1, j = 0, k = 0, l = 0;
	int temp, temp2;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	temp = n;
	temp2 = n;
	while (temp > 9)
	{
		temp /= 10;
		i *= 10;
	}
	while (i > 0)
	{
		j = temp2 / i;
		k = j % 10;
		l = k + '0';
		_putchar(l);
		temp2 %= i;
		i /= 10;
	}
}
