#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
		for (b = a + 1; b < 10; b++)
		{
			if (b != 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + a);
			putchar('0' + b);
		}

	putchar('\n');

	return (0);
}
