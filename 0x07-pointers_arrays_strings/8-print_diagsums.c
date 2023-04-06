#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: pointer to the first element of the array
 * @size: The size of the square array
 */
void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		s2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);

}
