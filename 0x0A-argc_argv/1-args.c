#include "main.h"
#include <stdio.h>

/**
 * main - printing arguments's number passed into program
 * @argc: arguments's number
 * @argv: arguments's array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
