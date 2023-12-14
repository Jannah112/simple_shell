#include "shell.h"

/**
 * _strdup - sjd
 * @str:lfkjd
 * Return: dlkmk
*/
char *_strdup(char *str)
{
	char *x;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != 0)
	{
		len++;
	}
	x = (char *) (malloc((sizeof(char) * len) + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
