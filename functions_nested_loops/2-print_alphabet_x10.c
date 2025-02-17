#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * this is reduplicated because the checker will not include files from
 * previous tasks.  which then the `main.h` file should REALLY not include the
 * other function signatures, but that's also a requirement :)  great job hbtn!
 * also yes i know i could have just inlined it, but it's here now so... ! :)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *						followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
