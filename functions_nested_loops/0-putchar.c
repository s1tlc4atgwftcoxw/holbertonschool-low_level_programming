#include "main.h"

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	const char *string = "_putchar\n";

	while (*string)
		_putchar(*string++);

	return (0);
}
