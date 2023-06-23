#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes out the character c to stdout
 * main - _putchar
 * @c: Character to print
 * Return: Success 1, on error -1.
 */
int _putchar(char c)

	return (write(1, &c, 1));
