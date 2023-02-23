#include "main.h"

/**
 * print_numbers - Print the number since 0 up to 9
 * Return: The number sine 0 up to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	_putchar((n % 10) + '0');
	}
	 _putchar('\n');
}
