#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100,
 * except multiples of 3 and 5
 * @q: number to be printed
 * Return: 0
 */

int fizz_buzz(int q)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if (q % 100 == 0)
			printf("Buzz");
		else if (q % 3 == 0 && q % 5 == 0)
			printf("FizzBuzz");
		else if (q % 3 == 0)
			printf("Fizz");
		else if (q % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", q);
	}
	printf("\n");
}
