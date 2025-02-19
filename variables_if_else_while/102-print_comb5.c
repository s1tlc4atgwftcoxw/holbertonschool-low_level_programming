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

	for (a = 0; a < 100; a++)
		for (b = a + 1; b < 100; b++)
		{
			if (b != 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
		}

	putchar('\n');

	return (0);
}
