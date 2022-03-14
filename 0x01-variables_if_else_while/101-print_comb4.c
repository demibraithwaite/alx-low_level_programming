#include <stdio.h>

/**
 * main - prints all combinations of three digits
 *
 * Return: 0, Everytime.
 *
 */

int main(void)
{
	int m;
	int n;
	int o;

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			for (o = m + 1; o <= 57; o++)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
