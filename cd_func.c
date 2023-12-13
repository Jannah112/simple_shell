#include "shell.h"
/**
 * cd - ghjkf
 * @argv: fhihg
 * @n: kfj
 * @p_name: kdfj
 *
 * Return: fhjjh
 */
int cd(char **argv, int n, char *p_name)
{
	int i;
	char *home = NULL;

	home = our_getenv("HOME");
	if (home == NULL)
	{
		perror("getenv");
		return (-1);
	}
	if (argv[1] == NULL || (argv[1][0] == '-' && argv[1][1] == '\0'))
	{
		i = chdir(home);
		free(home);
		return (1);
	}
	else
	{
		i = chdir(argv[1]);
		if (i != 0)
		{
			printf("%s: %d: cd: can't cd to %s\n", p_name, n, argv[1]);
			free(home);
			return (-1);
		}
		free(home);
	}
	return (1);
}
