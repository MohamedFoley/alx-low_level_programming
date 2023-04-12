#include "main.h"


/**
 * str_concat - Concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int length1 = 0, length2 = 0, x, y;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1])
		length1++;

	while (s2[length2])
		length2++;

	result = malloc(sizeof(char) * (length1 + length2 + 1));

		if (result == NULL)
			return (NULL);

	for (x = 0; x < length1; x++)

	result[x] = s1[x];

	for (y = 0; y < length2; y++)

	result[x + y] = s2[y];
	result[x + y] = '\0';

	return (result);


}
