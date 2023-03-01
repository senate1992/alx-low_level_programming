#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the sring to encode
 * Return: the pointer to the string
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
	j = 0;
	while (alpha[j] != '\0')
	{
	if (s[i] == alpha[j])
	{
	s[i] = rot13[j];
	break;
	}
	j++;
	}
	i++;
	}
	return (s);
}
