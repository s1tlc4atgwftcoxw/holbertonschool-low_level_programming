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
 * jack_bauer - Prints each permutation of (0..24, 0..60) in format AA:BB,
 *				seperated by a new line
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
		{
			print_number(h, 2, '0');
			_putchar(':');
			print_number(m, 2, '0');
			_putchar('\n');
		}
}
