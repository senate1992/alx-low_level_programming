#include "main.h"

/**
 * print_times_table - prints the times table of the input
 * starting with 0.
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)

{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	putchar('0');

