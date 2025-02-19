#include "main.h"
#define true 1
#define false 0

/**
 * int_pow - Calculate the power of a number - ~~quick~~ and dirty
 *
 * @n: The number to be raised
 * @exp: The exponent
 *
 * Return: The result of the operation
 */
int int_pow(int n, int exp)
{
	int i;
	int ret = n;

	if (exp == 0)
		return (1);

	for (i = 1; i < exp; i++)
		ret *= n;

	return (ret);
}

/**
 * print_number - Print a number with 0 padding to specified width
 *
 * @n: The number to be printed
 * @width: The number of digits to print
 * @pad_with: The character to pad with
 */
void print_number(int n, int width, char pad_with)
{
	int i;
	int printed = false;

	for (i = width; i > 1; i--)
	{
		int value = n / int_pow(10, i - 1) % 10;

		if (value)
		{
			_putchar('0' + value);
			printed = true;
			continue;
		}

		_putchar(printed ? '0' : pad_with);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_times_table - Prints the n-times table
 *
 * @n: The size of the times table - allowed range 0..=15
 */
void print_times_table(int n)
{
	int x;
	int y;

	if (n > 15)
		return;

	for (y = 0; y < n + 1; y++)
	{
		_putchar('0');

		for (x = 1; x < n + 1; x++)
		{
			_putchar(',');
			print_number(x * y, 4, ' ');
		}

		_putchar('\n');
	}
}
