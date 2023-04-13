#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @ac: first argument to be parsed
 * @av: second argument to be parsed
 * Return: 0 when successful
 */

int main(int ac, char **av)
{
	int i = 0;
	(void) ac; /* Ignore ac */

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}

