#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers.
 *
 * Return: always 0.
 */
void printFibonacci(int n)
{
	unsigned long long first = 1, second = 2;

	printf("%llu, %llu", first, second);

	for (int i = 3; i <= n; i++)
	{
		unsigned long long next = first + second;
		
		printf(", %llu", next);
		first = second;
		second = next;
	}
}

int main(void)
{
	printFibonacci(50);
	printf("\n");
	return (0);
}
