#include "main.h"
#include <stdio.h>

/**
 * main - prints the 9 times table starting with zero
 *
 * return: 0
 */
void times_table(void)
{
	for (int i = 0; i <= 10; i++)
	{
		int result = 9 * i;

		printf("9 * %d = %d\n", i, result);
	}
}
