#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; s[i]; i++)
	{
		count = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (count == 0)
			break;
	}
	return (i);
}
