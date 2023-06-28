#include <stdio.h>

/**
 * _strlen - returns the length of the string
 * @s: the string concerned
 * Return: length of @s
 */
size_t _strlen(const char *s) 
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length)
}
