#include "main.h"
#include <stdio.h>

/**
 * absolute_value - prints absolute value of an integer
 *
 * return: always 0
 */
int absolute_value(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}

int main()
{
	int result = absolute_value(-5);
	printf("%d\n", result);

	result = absolute_value(10);
	printf("%d\n", result);

	return (0);
}

