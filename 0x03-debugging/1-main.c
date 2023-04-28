#include <stdio.h>

/**
* main - causes an infinite loop
* Return: always 0
*/

int main(void)
{
int o;

printf("Infinite loop incoming :(\n");

o = 0;

while (o < 10)
{
putchar(o);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
