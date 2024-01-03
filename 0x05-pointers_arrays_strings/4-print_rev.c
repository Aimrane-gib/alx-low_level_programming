#include "main.h"

/**
 * print_rev - Entry point
 * @s : string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *tmp = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	if (*tmp == '\0')
	{
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		while (s != tmp)
		{
			_putchar(*s);
			s--;
		}
		_putchar(*tmp);
		_putchar('\n');
	}
}
