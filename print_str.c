#include "shell.h"
/**
 * number_of_digits - Entry point
 * @num: int
 * Return: nothing
 */
int number_of_digits(int num)
{
	int len = 0;

	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}


/**
 * handle_integer - Entry point
 * @num: va_list
 * Return: nothing
 */
void handle_integer(int num)
{
	int len, i;
	char *arr;

	len = number_of_digits(num);
	i = 0;
	arr = malloc(sizeof(char) * len);
	while (num != 0)
	{
		arr[i] = '0' + (num % 10);
		num /= 10;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		write(STDOUT_FILENO, &arr[i], 1);
	}
	free(arr);
}
/**
 * print_str - a function to print
 * @p_name: jdfkj
 * @n: dkfjk
 * @arg:lkfjdf
*/
void print_str(char *p_name, int n, char *arg)
{
	write(STDOUT_FILENO, p_name, strlen(p_name));
	write(STDOUT_FILENO, ": ", 2);
	handle_integer(n);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, arg, strlen(arg));
	write(STDOUT_FILENO, ": not found\n", 12);
}
