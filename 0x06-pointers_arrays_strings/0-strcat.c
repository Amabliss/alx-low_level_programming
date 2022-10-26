#include "main.h"
#include <stdio.h>

/**
 * strcat - concatennates two strings
 * @dest: copy to
 * @stc: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
