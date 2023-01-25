#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	int (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(arv[3])));
	return (0);
}
