#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to print the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	_putchar('0' + digit);

	return (digit);
}
