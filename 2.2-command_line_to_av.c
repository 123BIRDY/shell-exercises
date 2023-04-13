#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point prototye
 *
 * Return: 0 when successful
 */

int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *tok;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("buffer getline: %s", buffer);

		tok = strtok(buffer, " ");
		while (tok)
		{
			printf("buffer strtok: %s\n", tok);
			tok = strtok(NULL, " ");
		}
	}
	return (0);
}
