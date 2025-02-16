#include <stdio.h>

/**
 * print_size_of - prints the size of a data type
 * @name: the name of the data type
 * @size: the size of the data type
 */
void print_size_of(const char *name, const size_t size)
{
	printf("Size of %s: %zu byte(s)\n", name, size);
}

/**
 * main - Entry point
 *
 * Return: Exit code
 */
int main(void)
{
	print_size_of("a char", sizeof(char));
	print_size_of("an int", sizeof(int));
	print_size_of("a long int", sizeof(long int));
	print_size_of("a long long int", sizeof(long long int));
	print_size_of("a float", sizeof(float));
}
