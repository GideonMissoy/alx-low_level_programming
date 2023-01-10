#include <stdio.h>
#include "main.h"

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 * Description: a program that prints its name
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
