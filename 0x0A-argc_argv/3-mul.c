#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
