#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all numbers in range n..=98
 *
 * @n: Starting number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n++);
	}

	printf("98");
}
