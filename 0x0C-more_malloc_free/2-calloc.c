#include "main.h"

/**
 * *_calloc - function that allocate memory for an array
 * @nmemb: 1st parameter
 * @size: 2nd parameter
 * Return: pointer allocated to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
