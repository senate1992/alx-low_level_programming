#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the sring to encode
 * Return: the pointer to the string
 */

char *rot13(char *s)

{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j <= 12; j++)
	{
	if (s[i] == "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[j])
	{
	s[i] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"[j];
	break;
	}
	}
	}
	return (s);
}
