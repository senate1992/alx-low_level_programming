#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates all the arguments of program
* @ac: number of arguments
* @av: array of strings
*
* Return: string
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	len++;
	len++;
	}

	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
	return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	str[k] = av[i][j];
	k++;
	}
	str[k] = '\n';
	k++;
	}
	str[k] = '\0';

	return (str);
}
