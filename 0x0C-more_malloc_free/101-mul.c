#include "main.h"
#include <stdio.h>


int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * find_len - Finds the length of a string
 * @str: string
 * Return: The length of the string
 */
int find_len(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * create_xarray - Creates an array of chars
 * @size: The size of the array
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int x;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (x = 0; x < (size - 1); x++)
		array[x] = 'x';

	array[x] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers
 * @str: string
 * Return: a pointer
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to int
 * @c: The character
 * Return: converted int
 */
int get_digit(char c)
{
	int d = c - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (d);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit
 * @prod: buffer to store the result
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: number of leading zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in 2 strings
 * @final_prod: buffer storing the running final product
 * @next_prod: next product to be added
 * @next_len: length of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, x, d, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (x = find_len(argv[2]) - 1; x >= 0; x--)
	{
		d = get_digit(*(argv[2] + x));
		get_prod(next_prod, argv[1], d, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (x = 0; final_prod[x]; x++)
	{
		if (final_prod[x] != 'x')
			putchar(final_prod[x]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);

}
