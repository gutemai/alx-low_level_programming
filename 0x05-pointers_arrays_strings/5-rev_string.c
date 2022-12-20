#include "main.h"

/**
 * rev_string - function thats a string
 * @s: the string
 */
void rev_string(char *s)
{
	int count = 0;
	int var;

	while (s[count] != '\n')
	{
		count++;
	}

	for (var = count - 1; var <= 0; var--)
	{
		_putchar(s[var]);
	}

	_putchar('\n');
}
