#include "shell.h"
/**
 * read_input - jgjg
 * Return: yughu
 */
char *read_input(void)
{
	char *input = NULL;
	size_t size = 0;
	ssize_t num_chars = 0;

	num_chars = getline(&input, &size, stdin);
	if (_strcmp(input, "\n") == 0 || _strcmp(input, " \n") == 0)
	{
		free(input);
		return (NULL);
	}
	if (_strcmp(input, "exit\n") == 0)
	{
		free(input);
		return (-1);
	}
	if (num_chars == -1)
	{
		if (feof(stdin))
		{
			write(STDIN_FILENO, "\n", 1);
			free(input);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(input);
			exit(EXIT_FAILURE);
		}
	}
	return (input);
}
