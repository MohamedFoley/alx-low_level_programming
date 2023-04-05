#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to match
 * Return: the number of characters in the initial segment of s that
 * consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] != 32)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
		c++;
	}
	}
	else
		return (c);

	}

	return (c);

}
