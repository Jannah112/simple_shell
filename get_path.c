#include "shell.h"
/**
 * get_path - hjj
 * @input: ghj
 * Return: huu
 */
char *get_path(char *input)
{
char *path = NULL, *path_cp = NULL, *file_path, *path_tok = NULL, *b_in = NULL;
	int input_len, dir_len;
	char *seperator = ":";
	struct stat buf;

	path = our_getenv("PATH");
	if (path)
	{
		b_in = _strdup(input);
		path_cp = _strdup(path);
		input_len = _strlen(input);
		path_tok = strtok(path_cp, seperator);
		while (path_tok != NULL)
		{
			dir_len = strlen(path_tok);
			file_path = malloc(input_len + dir_len + 2);
			malloc_return(file_path);
			_strcpy(file_path, path_tok);
			_strcat(file_path, "/");
			_strcat(file_path, input);
			_strcat(file_path, "\0");
			if (stat(file_path, &buf) == 0)
			{
				free(path_cp);
				free(path);
				free(b_in);
				return (file_path);
			}
			else
			{
				free(file_path);
				path_tok = strtok(NULL, ":");
			}
		}
	}
	free(path);
	free(path_cp);
	if (stat(input, &buf) == 0)
		return (b_in);
	free(b_in);
	return (NULL);
}
