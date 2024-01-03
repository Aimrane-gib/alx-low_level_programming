#include "main.h"

/**
 * rev_string - Entry point
 * @s: string
 *
 * Return: none
 */

void rev_string(char *s)
{
	char temp;
	int length = 0;
	int i = 0;

	if (s == NULL)
	{
		return;
	}

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
