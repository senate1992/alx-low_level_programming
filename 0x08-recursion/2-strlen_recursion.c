#include "main.h"

/**
 * _strlen_recursion - function to get the length of a string
 * @s: char array string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
