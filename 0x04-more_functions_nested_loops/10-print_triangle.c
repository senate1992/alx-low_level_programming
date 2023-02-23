#include "main.h"

/**
 * print_triangle - prints a triangle of square according to parameter
 * @size: the size of square
 * Return: empty
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
	for (y = 1; y <= x; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
