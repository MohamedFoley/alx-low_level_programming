#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds positive numbers
 * then Print the result
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0, x, y;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		for (x = 1; x < argc; x++)
		{

			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
