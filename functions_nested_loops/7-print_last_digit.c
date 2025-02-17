#include "main.h"

/**
 * _abs - Return the absolute value of an integer
 * @n: The number to return the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to print the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int digit = _abs(n % 10);

	_putchar('0' + digit);

	return (digit);
}
