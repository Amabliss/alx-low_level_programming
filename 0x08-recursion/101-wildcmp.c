#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - returns the length of a string
 *			ignoring wildcard characters
 * @str: the string to be mearsured
 *
 * Returned: the length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;
