#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Returns: 0 on success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])

{
	printf("%d\n", argc - 1);

	return (0);

}
