#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0, Everytime.
 *
 */

int main(void)
{
	char s[9] = "_putchar";
	int i = 0; 

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}


