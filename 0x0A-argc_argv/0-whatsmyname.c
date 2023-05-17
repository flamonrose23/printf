#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: arguments's number
 * @argv: arguments's array
 *
 * Return: always 0 (success)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
