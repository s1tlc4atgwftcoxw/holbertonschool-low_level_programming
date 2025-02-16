#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
