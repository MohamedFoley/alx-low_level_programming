#include "main.h"


/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
	return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
	return (NULL);
	nmemb *= size;
	while (nmemb--)
	ptr[nmemb] = 0;
	return (ptr);


}
