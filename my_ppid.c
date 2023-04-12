#include <stdio.h>
#include <unistd.h>

/**
 * main - function to find parent PID
 *
 * Return: 0 when successful
 */

int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
