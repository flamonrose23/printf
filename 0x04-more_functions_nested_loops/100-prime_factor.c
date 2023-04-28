#include <stdio.h>
#include <math.h>
/**
 * main - printing  largest prime factor of number 612852475143
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	long int n;
	long int m;
	long int p;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}

	for (p = 3; p <= sqrt(n); p = p + 2)
	{
		while (n % p == 0)
		{
			m = p;
			n = n / p;
		}
	}
	if (n > 2)
		m = n;
	printf("%ld\n", m);
	return (0);
}
