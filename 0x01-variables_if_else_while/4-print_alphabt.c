#include <stdio.h>

/**
 * main - print most of the letters of the alphabet
 *
 * Return: 0, Everytime.
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);

}
