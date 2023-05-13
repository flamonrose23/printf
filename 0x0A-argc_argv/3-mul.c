#include "main.h"
#include <stdio.h>

/**
 * _atoi - converting string to integer
 * @s: string to be vonverted
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int x, y, z, len, f, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);
	return (z);
}

/**
 * main - writing program that multiplies two numbers
 * @argc: arguments's number
 * @argv: arguments's array
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int result, num0, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num0 = _atoi(argv[1]);
	num1 = _atoi(argv[2]);
	result = num0 * num1;

	printf("%d\n", result);
	return (0);
}
