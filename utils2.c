#include "main.h"

/**
 * is_digit - Verifies if a character is a digit
 * @c: character to be evaluated
 *
 * Return: 1 if c is a digit, else return 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
