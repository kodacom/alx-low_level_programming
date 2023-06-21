#include "main.h"
#include <unistd.h>
/**
 * _putchar - print the character c to stdout
 * Return: on success 1
 * Return: on error -1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
