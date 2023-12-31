#include "shell.h"

/**
 * read_input - Reads input from the user
 * Return: The input string or NULL on certain conditions
 */
char *read_input(void)
{
	char *input = NULL;
	size_t size = 0;
	ssize_t num_chars = 0;

	num_chars = getline(&input, &size, stdin);

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

	if (strcmp(input, "\n") == 0 || strcmp(input, " \n") == 0)
	{
		free(input);
		return (NULL);
	}

	if (strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit(EXIT_SUCCESS);
	}

	return (input);
}
