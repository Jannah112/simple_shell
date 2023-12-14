#include "shell.h"

/**
 * _strlen - f name
 * @s: par
 * Return: return count
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	return (count);
}
