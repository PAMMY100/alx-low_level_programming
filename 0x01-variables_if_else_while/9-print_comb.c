#include <stdio.h>

/**
 * main - function that print numbers sepreated with comma
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 9)
			putchar(x + '0');
		else
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}