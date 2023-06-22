#include "main.h"
#include <stdio.h>

/**
 * main - prints the n times table starting with 0
 *
 * Return: always 0
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			printf("%4d ", result);
		}
		printf("\n")
	}
}
