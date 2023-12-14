#include "shell.h"
/**
 * fre - hfjdj
 * @a: hfhfh
 * @b: dhhfjfj
 * @c: dhdhhd
 */
void fre(char *a, char *b, char *c)
{
	free(a);
	free(b);
	free(c);
}
/**
 * fr - fhhddjj
 * @a: dhdh
 * @b: djjdjdj
 * @c: fhdhjdh
 * @d: dhhrh
 * @e: rhhru
 */
void fr(char *a, char **b, char *c, char *d, char *e)
{
	int i;

	i = 0;
	free(a);
	while (b[i])
	{
		free(b[i]);
		i++;
	}
	free(b);
	free(c);
	free(d);
	free(e);
}
/**
 * tok - gdjddj
 * @input: rhruru
 * @p_name: djdjdjj
 * @n: guhuhg
 */
void tok(char *input, char *p_name, int n)
{
	char *input_tok = NULL, *tok_cpy = NULL, *token = NULL, *delim = " \n";
	char **argv;
	int tok_num = 0, i = 0, x = 0;

	input_tok = _strdup(input);
	tok_cpy = _strdup(input);
	token = strtok(input_tok, delim);
	while (token)
	{
		if (_strcmp(token, " ") == 0)
			token = strtok(NULL, delim);
		else
		{
			tok_num++;
			token = strtok(NULL, delim);
													}
	}
	if (tok_num == 0)
	{
		fre(input_tok, tok_cpy, input);
		return;
	}
	tok_num++;
	argv = malloc(sizeof(char *) * tok_num);
	malloc_return(*argv);
	token = strtok(tok_cpy, delim);
	while (token)
	{
	argv[i] = malloc(sizeof(char) * strlen(token));
	malloc_return(argv[i]);
	_strcpy(argv[i], token);
	token = strtok(NULL, delim);
	i++;
	}
	argv[i] = NULL;
	x = executes(argv, n, p_name);
	if (x == 2)
		print_str(p_name, n, argv[0]);
	fr(input, argv, tok_cpy, token, input_tok);
}
