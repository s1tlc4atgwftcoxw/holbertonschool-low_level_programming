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

	printf("%d is ", n);

	if (n > 0)
		puts("positive");
	else if (n < 0)
		puts("negative");
	else
		puts("zero");

	return (0);
}
