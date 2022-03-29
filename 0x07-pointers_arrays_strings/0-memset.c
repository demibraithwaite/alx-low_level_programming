#include "main.h"
/**
 * _memset - fills the first bytes with the constant byte, b.
 * @b: the constant byte.
 * @s: the memory area.
 * @n: the number of bytes filled.
 * Return: pointer to destination, s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
