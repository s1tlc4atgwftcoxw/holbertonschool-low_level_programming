#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	uint64_t a = 0; /* F(0) */
	uint64_t b = 1; /* F(1) */
	uint64_t sum = 0;

	while (true)
	{
		uint64_t fib = a + b;

		if (fib > 4000000)
			break;

		if (fib % 2 == 0)
			sum += fib;

		a = b;
		b = fib;
	}

	printf("%lu\n", sum);

	return (0);
}
