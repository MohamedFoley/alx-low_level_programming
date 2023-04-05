#include "main.h"


/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to dest where the content is to be copied
 * @src: pointer to source of data to be copied
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)

	{

	do      {
		*(dest++) = *(src++);

		}       while (--n != 0);
	}

	return (dest);

}

