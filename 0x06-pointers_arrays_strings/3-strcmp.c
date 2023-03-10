#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference
 * If str1 == str2, 0.
 * If str1 > str2, thwe positive differenceo of the unmatched characters
 */

int _strcmp(char *s1, char *s2)

{
	size_t i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	i++;

	if (s1[i] == s2[i])
	return (0);
	else
	return (s1[i] - s2[i]);
}
