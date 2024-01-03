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

	while (s != tmp)
	{
		_putchar(*s);
		s--;
	}
	_putchar(*tmp);
	_putchar('\n');
}
