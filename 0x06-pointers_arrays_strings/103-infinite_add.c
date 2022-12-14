#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer to store the result
 * @size_r: The buffer sizes
 *
 * Return: If r can store the sum _ a pointer to the results
 *		If r cannot store the sum - 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;
	for (i = 0; *(n2 + i); i++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + !)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(ni, n2, r, --size_r));
}
