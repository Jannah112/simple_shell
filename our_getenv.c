#include "shell.h"
/**
 * our_getenv - rjrjrj
 * @name: djjdjdj
 * Return: djdjdjdj
 */
char *our_getenv(const char *name)
{
	char *path_value;
	char *ac = NULL;
	char **s;
	int i = 0, x = 0;

	while (environ[i])
	{
		x++;
		i++;
	}
	x++;
	s = malloc(sizeof(char *) * x);
	i = 0;
	while (environ[i])
	{
		s[i] = strdup(environ[i]);
		i++;
	}
	s[i] = NULL;
	i = 0;
	while (s[i])
	{
		path_value = strtok(s[i], "=");
		if (strcmp(path_value, name) == 0)
		{
			path_value = strtok(NULL, "=");
			ac = strdup(path_value);
		}
		i++;
	}
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (ac);
}
