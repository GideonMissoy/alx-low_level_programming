#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * except multiples of 3 and 5
 */

int main(void)
{
	int q;

	for (q = '1'; q <= 100; q++)
	{
		if (q == 100)
			printf("Buzz");
		else if (q % 3 == 0 && q % 5 == 0)
			printf("FizzBuzz");
		else if (q % 3 == 0)
			printf("Fizz");
		else if (q != 100 && q % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", q);
	}
	printf("\n");
}
