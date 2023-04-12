#include "main.h"


/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *k;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	k = malloc(sizeof(char) * (x + 1));

	if (k == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		k[y] = str[y];

	return (k);

}
