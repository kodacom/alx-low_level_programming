#include <stdio.h>

/**
 * swap_int - swaps the value of 2 int
 * @a: first int to be swapped
 * @b: second int to be swapped
 * 
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
