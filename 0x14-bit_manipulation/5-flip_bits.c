#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: number of bits you would need
 * to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, p;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (p = 0; p < (sizeof(unsigned long int) * 8); p++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
