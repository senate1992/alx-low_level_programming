#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	int p;
	char *x;

	p = 1;
	x = (char *)&p;
	return (*x);
}
