#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		putchar(i + (i < 10 ? '0' : 'a' - 10));

	putchar('\n');

	return (0);
}
