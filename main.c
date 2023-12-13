#include "shell.h"

/**
 * main - the main loop of the shell
 * @argc: fjkd
 * @argv: fkdjd
 *
 * Return: 0 success.
*/
int main(int argc, char *argv[])
{
	char *input;
	int n = 0;
	(void)argc;
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		input = read_input();
		n++;
		if (input != NULL)
			tok(input, argv[0], n);
	}
	return (0);
}
