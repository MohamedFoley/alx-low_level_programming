#include "main.h"


/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: char to assign
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	for (x = 0; x <= size; x++)
	{
	array[x] = c;
	}
	return (array);

}
