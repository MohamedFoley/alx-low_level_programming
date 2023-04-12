#include "main.h"


/**
 * count - function to counts the number of words in a string
 * @s: string
 * Return: number of words
 */
int count(char *s)
{
	int x;
	int n = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				n++;
		}
		else if (x == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - function that splits string into words
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **w;
	int x, y, k, l;
	int n = 0;
	int wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			w[wc] = (char *)malloc(y * sizeof(char));
			y--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < y; l++)
				w[wc][l] = str[x + l];
			w[wc][l] = '\0';
			wc++;
			x += y;
		} else
			x++;
	} return (w);
}
