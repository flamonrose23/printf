#include "main.h"

int actual_prime(int n, int m);

/**
 * is_prime_number - saying if an integer is a prime number or not
 * @n: number for evaluation
 *
 * Return: 1 if n a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculating if number is prime recursively
 * @n: number for evaluation
 * @m: iterator
 *
 * Return: 1 if n a prime and 0 if not
 */

int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}
