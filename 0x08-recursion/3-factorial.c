#include "main.h"

/**
 * factorial - function that returns the factorial of num
 * @n: function parameter
 * Return: always 0
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
