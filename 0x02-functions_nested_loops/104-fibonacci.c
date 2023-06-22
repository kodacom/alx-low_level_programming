#include "main.h"
#include <stdio.h>

/**
 * printFibonacci - print the first 98 Fibonacci number n.
 * main - print the first 98 Fibonacci numbers.
 * n - Fibonacci numbers.
 * Return: always 0
 */
void printFibonacci(int n)
{
	if (n <= 0)
	return;

	unsigned int first = 1, second = 2;
	
	printf("%u, %u", first, second);

	for (int i = 3; i <= n; i++)
	{
		unsigned int next = first + second;
		
		printf(", %u", next);
		first = second;
		second = next;
	}
}

int main(void)
{
	printFibonacci(98);
	printf("\n");
	return (0);
}
