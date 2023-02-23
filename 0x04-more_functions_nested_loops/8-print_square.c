#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: size of the square
*/

void print_square(int size)

{
	int l, c;

	if (size > 0)
	{
	for (l = 0; l < size; l++)
	{
	for (c = 0; c < size; c++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
