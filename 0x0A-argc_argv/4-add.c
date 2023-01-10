#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int p, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (p = 0; argv[argc][p] != '\0'; p++)
		{
			if (!(isdigit(argv[argc][p])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
