#include "main.h"
#include <stdio.h>

/**
 * _strncat - joins two string with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int f;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
