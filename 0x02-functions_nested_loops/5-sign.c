#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign of a number
 *
 * Return: always 0
i */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
	return (0);
}
