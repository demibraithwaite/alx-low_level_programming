#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 *
 * @size: The size of the array to be initialized.
 *
 * @c: The specific char to initialize the array with.
 *
 * Return: If size == 0 or the fxn fails - NULL
 *
 * Otherwise - a pointer to the array.
 */
 
char *create_array(unsigned int size, char c);
{
	if (size == o)
		return (NULL);
	char *arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
