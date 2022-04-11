#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the name of the file 
 * that it was compiled from
 * Return: Always o
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
