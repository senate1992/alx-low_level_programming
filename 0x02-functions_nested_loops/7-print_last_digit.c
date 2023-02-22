#include "main.h"

/**
 * Print_last_digit - This function prints the last digit of a given number
 * @n: The number to be treated, This function prints the last digit of number
 * Return: Value of the last digit of number
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
