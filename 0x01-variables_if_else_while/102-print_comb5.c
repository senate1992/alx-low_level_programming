#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)

{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	for (j = 0; j <= 9; j++) 
	{
	putchar(j + '0');
	if (i != 9 || j != 9) 
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return 0;
}
