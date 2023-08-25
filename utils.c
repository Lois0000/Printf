#include "main.h"

/**
 * is_printable - Evaluates if a character is printable
 * @c: the character to be evaluated
 *
 * Return: 1 if c is printable, else print 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
