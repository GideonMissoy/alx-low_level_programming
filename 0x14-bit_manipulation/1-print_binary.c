#include "main.h"

/**
 * _power - calculate (base and power)
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of the base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int p;

	num = 1;
	for (p = 1; p <= pow; p++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num to print
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
			_putchar('0');
		dev >>= 1;
	}
}
