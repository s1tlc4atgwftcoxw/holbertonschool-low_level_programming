#include <stdint.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int i;
	uint64_t a = 0;
	uint64_t b = 1;

	for (i = 2; i <= 50; i++)
	{
		uint64_t fib = a + b;

		a = b;
		b = fib;

		if (i != 2)
			printf(", ");

		printf("%lu", fib);
	}

	return (0);
}
