#include <unistd.h>

/**
 * _putchar - writes a character
 *
 * @c: the character to be written
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
