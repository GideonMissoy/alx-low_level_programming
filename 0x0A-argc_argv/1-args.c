#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 * Description: prints number of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int p;

	for (p = 0; p < argc; p++)
		*argv[p] = *argv[p];
	printf("%d\n", (p - 1));
	return (0);
}
