#include <stdbool.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int i;

	for (i = 0; true; i++)
	{
		putchar('0' + i);

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
