#include "shell.h"

void exit_stat(pid_t i, int j)
{
	if (waitpid(i, &j, 0) == -1)
	{
		perror("waitpid");
		exit(EXIT_FAILURE);
	}
	if (WIFEXITED(j) && WEXITSTATUS(j) != 0)
	{
		exit(2);
	}
}
/**
 * executes - ghjj
 * @argv: yuu
 * @p_name: jfgh
 * @n: ghghhh
 * Return: dkfjkd
 */
int executes(char **argv, int n, char *p_name)
{
	pid_t id;
	int error, status =0;
	char *input = NULL, *cmd = NULL;

	if (_strcmp(argv[0], "cd") == 0)
		return (cd(argv, n, p_name));
	if (strcmp(argv[0], "env") == 0)
		return (print_env());
	if (argv)
	{
		input = argv[0];
		cmd = get_path(input);
		if (cmd == NULL)
		{
			free(cmd);
			return (2);
		}
		id = fork();
		if (id == 0)
		{
			error = execve(cmd, argv, environ);
			if (error == -1)
			{
				free(cmd);
				exit(EXIT_FAILURE);
			}
		}
		else if (id < 0)
		{
			free(cmd);
			exit(EXIT_FAILURE);
		}
		else
		{
			exit_stat(id, status);
			wait(NULL);
		}
	}
	free(cmd);
	return (0);
}
