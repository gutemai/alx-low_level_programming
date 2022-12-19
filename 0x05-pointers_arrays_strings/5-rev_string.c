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

	for (var = count; count < 0; var--)
	{
		_ putchar(s[count]);
	}

	_putchar('\n');
}
