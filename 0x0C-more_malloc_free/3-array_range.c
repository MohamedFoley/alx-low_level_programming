#include "main.h"


/**
 * array_range - Creates an array of integers
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array;
	int r = max - min + 1;
	int x;

	if (min > max)
	return (NULL);
	array = malloc(r * sizeof(int));
	if (array == NULL)
	return (NULL);
	for (x = 0; x < r; x++)
	array[x] = min + x;

	return (array);


}
