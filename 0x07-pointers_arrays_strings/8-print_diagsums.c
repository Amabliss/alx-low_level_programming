#include "main.h"
#include <stdio.h>
/**
 * print_diagrams - prints the sum of diagonals in a square matrix
 * @a: the matrix
 * @size: the square size
 *
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (1 = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum += a[i];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
