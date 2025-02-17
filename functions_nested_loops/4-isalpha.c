#include "main.h"

/**
 * _isalpha - Checks whether the character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
