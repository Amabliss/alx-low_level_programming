#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 9; a++)
	{
		if (num > 9)
		{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
