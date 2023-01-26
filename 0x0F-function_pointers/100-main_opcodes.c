#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of this function
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%.2hhx", a[p]);
		if (p < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int q;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	q = atoi(argv[1]);
	if (q < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, q);
	return (0);
}
