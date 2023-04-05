#include "main.h"


/**
 * _memset - check if n is greater than 0
 * @s: initialize pointer p to s
 * @n: loop through n
 * @b: set value of p to b
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)

	{
		char *p = s;

		while (n--)
		{
			*p++ = b;
		}
	}
	return (s);
}
