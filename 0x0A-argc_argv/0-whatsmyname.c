#include <stdio.h>


/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	const char *name;

	(void)argc;
	name = argv[0];
	printf("%s\n", name);
	return (0);

}
