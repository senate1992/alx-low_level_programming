#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		p[k] = s1[k];
	for (l = 0; s2[l] != '\0'; l++)
		p[i + l] = s2[l];
	p[i + j] = '\0';
	return (p);
}
