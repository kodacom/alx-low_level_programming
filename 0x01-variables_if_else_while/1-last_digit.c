#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 * is it greater than ,less than 6, or 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d  and is greater than\n", n, n% 10);
	}
	else if ((n % 10) < 6 &&c(n % 10) != 0)
	{
		printf("Last digit of %d is %d  and is less  than\n", n, n% 10);
	}
	else
	{
		printf("Last digit of %d is %d  and is 0\n", n, n% 10);
	}
	return (0);
}
