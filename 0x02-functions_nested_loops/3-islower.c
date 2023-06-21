#include "main.h"
#include <ctype.h>

/**
 * islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
