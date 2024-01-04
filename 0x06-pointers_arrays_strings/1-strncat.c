#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: number of bytes.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (result);
}
