#include <stdio.h>
#include "main.h"

/**
 * main - should print all the alphabets in lowercase
 *
 * Return: 0, Everytime.
 *
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
