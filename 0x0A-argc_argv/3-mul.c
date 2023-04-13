#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * then prints the sum of the multiplication
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n1, n2, sum;

	if (argc == 3)
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	sum = n1 * n2;
	printf("%d\n", sum);
	return (0);
	}
		else
		{
			printf("Error\n");
			return (1);
		}
}
