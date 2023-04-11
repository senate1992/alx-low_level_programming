#include "main.h"

/**
 * binary_to_uint - converts the binary
 * @b: points to string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int git;

	git = 0;
	if (!b)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
		git <<= 1;
		if (b[p] == '1')
			git += 1;
	}
	return (git);
}
