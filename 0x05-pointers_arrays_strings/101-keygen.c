#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates random valid passwords
 * for the program 101-crackme.
 * Return: 0
 */

int main(void)
{
	char code[84];
	int index = 0;
	int sum = 0;
	int h1;
	int h2;

	srand(time(0));

	while (sum < 2772)
	{
		code[index] = 33 + rand() % 94;
		sum += code[index++];
	}

	code[index] = '\0';

	if (sum != 2772)
	{
		h1 = (sum - 2772) / 2;
		h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			h1++;

		for (index = 0; code[index]; index++)
		{
			if (code[index] >= (33 + h1))
			{
				code[index] -= h1;
				break;
			}
		}
		for (index = 0; code[index]; index++)
		{
			if (code[index] >= (33 + h2))
			{
				code[index] -= h2;
				break;
			}
		}
	}
	printf("%s", code);

	return (0);
}
