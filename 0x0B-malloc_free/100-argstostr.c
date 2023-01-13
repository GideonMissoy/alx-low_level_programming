#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments
 * @av: pointer
 * Return: pointer to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int p, q, v = 0, w = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			w++;
		w++;
	}
	s = malloc(w * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			s[v] = av[p][q];
			v++;
		}
		s[v] = '\n';
		v++;
	}
	s[v] = '\0';
	return (s);
}
