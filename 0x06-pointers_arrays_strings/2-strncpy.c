#include "main.h"

/**
 * __strncpy - Copies at most of inputed number
 * of bytes from string src into dest.
 * @dest: The buffering storing the string copy.
 * @src: The source string.
 * @n: The maximumu number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
        int index = 0, src_len = 0;

        while (src[index++])
        src_len++;

        for (index = 0; src[index] && index < n; index++)
        dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

        return (dest);
}
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
~                                                                                                                                           
"1-strncat.c" 21L, 533C                                                                                                   21,1          All

