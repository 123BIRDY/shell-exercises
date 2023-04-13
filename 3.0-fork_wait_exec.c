#include <stdio.h>
#include <unistd.h>

/**
 * main - function to execute
 *
 * Return: 0 when successful
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
