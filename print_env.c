#include "shell.h"
/**
 * print_env - dhfjjf
 * Return: rhrhur
 */
int print_env(void)
{
	char **s = environ;

	while (*s)
	{
		write(STDOUT_FILENO, *s, strlen(*s));
		write(STDOUT_FILENO, "\n", 1);
		s++;
	}
	return (0);
}
