#include "main.h"

/**
 * print_numbers - function that prints 0-9
 * Return: always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
