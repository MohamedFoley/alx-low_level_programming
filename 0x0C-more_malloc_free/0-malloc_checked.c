#include "main.h"


/**
 * malloc_checked - Allocates memory using malloc
 * if malloc fails the malloc_checked function should cause
 * normal process termination with a status value of 98
 * @b: The number of bytes
 * Return: A pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);


}
