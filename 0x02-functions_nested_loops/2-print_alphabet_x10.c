#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
