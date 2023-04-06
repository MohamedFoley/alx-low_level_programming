#include "main.h"


/**
 * actual_sqrt_recursion - test values of i to find the square root of n
 * @n: the number to find the square root of
 * @i: the value to test
 * Return: the square root of n, or -1 if it doesn't exist
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i > n / 2)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (actual_sqrt_recursion(n, 1));

}
