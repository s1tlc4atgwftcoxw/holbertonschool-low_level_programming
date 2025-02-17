#include "main.h"
#define true 1
#define false 0

/**
 * pow - Calculate the power of a number - ~~quick~~ and dirty
 *
 * @n: The number to be raised
 * @exp: The exponent
 *
 * Return: The result of the operation
 */
int pow(int n, int exp)
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
		int value = n / pow(10, i - 1);

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
 * times_table - Prints the 9-times table
 */
void times_table(void)
{
	int x;
	int y;

	for (y = 0; y < 9; y++)
	{
		_putchar('0');
		_putchar(',');

		for (x = 1; x < 9; x++)
		{
			print_number(x * y, 3, ' ');
			_putchar(',');
		}

		_putchar('\n');
	}
}
