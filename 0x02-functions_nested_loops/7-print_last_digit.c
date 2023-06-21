#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints last digit of a number
 * num - numbers imputed.
 * Return: 0
 */
int print_last_digit(int num)
{
	int last_digit = abs(num) % 10;

	printf("%d\n", last_digit);

	return (last_digit);
}

int main(void)
{
	int result = print_last_digit(123);
	
	printf("%d\n", result);

	result = print_last_digit(-456);
	printf("%d\n", result);

	return (0);
}
