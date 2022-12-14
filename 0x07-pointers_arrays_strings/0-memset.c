#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area
 * @s: A pointer to the menory are to be filled
 * @c: The character to fill thr memory path
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
