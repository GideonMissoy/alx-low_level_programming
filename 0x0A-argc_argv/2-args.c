#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: 1st parameter
 * @argv: 2nd parameter
 * Description: prints all arguments it receives
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
		printf("%s\n", argv[p]);
	return (0);
}
