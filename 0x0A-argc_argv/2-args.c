#include <stdio.h>


/**
 * main - prints all arguments passed into it
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{

	int x;

	for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);
	return (0);

}
