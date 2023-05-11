#include "main.h"

int actual_sqrt_recursion(int n, int m);
/**
 * _sqrt_recursion - returning natural square root of number
 * @n: number that calculate square root
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of number
 * @n: number that calculate square root
 * @m: iterator
 *
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
