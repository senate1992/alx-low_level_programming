#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: input
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else if (n == 1)
	{
	return (1);
	}
	else
	{
	int x = _sqrt_recursion(n - 1);

	if ((x * x) == n)
	{
	return (x);
	}
	else
	{
	return (-1);
	}
	}
}
