
/**
 * print_unsigned - Prints an unsigned integer
 * @num: The unsigned integer to print
 *
 * Return: The number of characters printed
 */

/**
 *int print_unsigned(unsigned int num)
*{
*int count = 0;

*if (num >= 10)

*count += print_unsigned(num / 10);

*_putchar('0' + num % 10);
*count++;
*return (count);
*}
*/
