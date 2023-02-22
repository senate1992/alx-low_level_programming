#include "main.h"

/**
 * print_last_digit - This function print_last_digitof a given number
 * @n: The number to be treated, This function print_last_digitof number
 * Return: print_last_digit
 *
 */

int print_last_digit(int n)

	{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
