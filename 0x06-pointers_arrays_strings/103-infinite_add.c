#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: first
 * @n2: second
 * @*r: third
 * @_r: foruth
 * Return: void
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;
	int carry = 0;
	int tmp;
	int sum;
	int i, j;

	while (n1[len1] != '\0')
	len1++;
	while (n2[len2] != '\0')
	len2++;
	if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);

	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 && j >= 0)
	{
	tmp = (n1[i] - '0') + (n2[j] - '0') + carry;
	carry = tmp / 10;
	sum = tmp % 10;
	r[i + j + 1] = sum + '0';
	i--;
	j--;
	}
}

