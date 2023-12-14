#include "shell.h"

/**
 * _strcat - name
 * @dest: par
 * @src: par
 * Return: return
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int x, a;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		j++;
	}
	x = i + j;
	for (a = i; a < x; a++)
	{
		dest[a] = src[a - i];
	}
	dest[x] = '\0';
	return (dest);
}
