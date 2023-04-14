#include "main.h"


/**
 * _isdigit - checks if character is digit
 * @c: character
 * Return: 1, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;
	return (x);
}


/**
 * big_multiply - multiply two big numbers
 * @s1: 1 string
 * @s2: 2 string
 * Return: big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int len1, len2, a, b, c, y;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	r = malloc(a = y = len1 + len2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(s1[len1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[len1] - '0';
		c = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(s2[len2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[len2] - '0';

			c += r[len1 + len2 + 1] + (a * b);
			r[len1 + len2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[len1 + len2 + 1] += c;
	}
	return (r);
}


/**
 * main - multiply two big numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, y;

	if (argc != 3)
		printf("Error\n"), exit(98);

	y = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < y)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);


}
