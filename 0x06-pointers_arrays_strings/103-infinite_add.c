#include "main.h"

/**
 * add_strings - Adds the number stored in two strings.
 * @n1: the string containing first number
 * @n2: the string containing second number
 * @r: the buffer to store result
 * @r_index: The current index of the buffer
 *
 * Return: if r can store the sum
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens + num / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r index);
	}

	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - add 2 numbers together
 * n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: if r can store the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
