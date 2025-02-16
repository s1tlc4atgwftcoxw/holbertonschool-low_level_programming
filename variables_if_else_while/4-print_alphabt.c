#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		i != 'q' && i != 'e' && putchar(i);

	putchar('\n');

	return (0);
}
