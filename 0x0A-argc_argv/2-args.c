#include "main.h"
#include <stdio.h>

/**
 * main - printing all arguments it receives
 * @argc: arguments's number
 * @argv: arguments's array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
