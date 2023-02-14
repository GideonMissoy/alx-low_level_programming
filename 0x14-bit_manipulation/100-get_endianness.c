#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int p;
	char *q;

	p = 1;
	q = (char *)&x;
	return (*q);
}

