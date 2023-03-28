#include "main.h"


/**
 * _puts - prints a string followed by a new line
 * @str: the string
 *
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
