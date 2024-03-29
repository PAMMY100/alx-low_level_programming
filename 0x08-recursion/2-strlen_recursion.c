#include "main.h"

/**
 * _strlen_recursion - function that returns the length of string
 * @s: function parameter
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
