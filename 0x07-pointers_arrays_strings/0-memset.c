#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
