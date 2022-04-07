#include <stdlib.h>
/**
 * malloc_checked - a fxn that allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: Pointer to the address
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
