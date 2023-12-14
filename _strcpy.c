#include "shell.h"

/**
 * _strcpy - f name
 * @src: par
 * @dest: name
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	int c = 0;

	while (src[c] != 0)
	{
		c = c + 1;
	}
	for (j = 0; j < c; j++)
	{
		dest[j] = src[j];
	}
	dest[c] = '\0';
	return (dest);
}
