#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int digit = n % 10;

	printf("Last digit of %d is %d and is ", n, digit);

	if (digit > 5)
		puts("greater than 5");
	else if (digit == 0)
		puts("0");
	else
		puts("less than 6 and not 0");

	return (0);
}
