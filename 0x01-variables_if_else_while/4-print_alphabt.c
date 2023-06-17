#include <stdio.h>

/**
 * main - lower and uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')putchar(letter);
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
