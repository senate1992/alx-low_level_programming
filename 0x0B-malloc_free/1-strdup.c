#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer to new string, or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, length;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	strCopy = malloc(sizeof(char) * (length + 1));
	if (strCopy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		strCopy[i] = str[i];

	strCopy[i] = '\0';

	return (strCopy);
}
