#include "main.h"
#include <stdio.h>

/**
 * main - find and print the sum of th even-valued terms.
 *
 * Return: always 0.
 */
int main(void)
{
	int first = 1, second = 2;
	int sum_even = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
		{
			sum_even += first;
		}

		int next = first + second;
		
		first = second;
		second = next;
	}

	printf("%d\n", sum_even);
	return (0);
}
