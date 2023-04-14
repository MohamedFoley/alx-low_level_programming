#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - Concatenates two strings
 * @s1: string
 * @s2: string
 * @n: The maximum number of bytes
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n, x;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (x = 0; s1[x]; x++)
	length++;
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
	return (NULL);
	length = 0;
	for (x = 0; s1[x]; x++)
	concat[length++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
	concat[length++] = s2[x];
	concat[length] = '\0';

	return (concat);


}
