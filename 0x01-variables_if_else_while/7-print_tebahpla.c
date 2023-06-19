#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * followed by new line
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
