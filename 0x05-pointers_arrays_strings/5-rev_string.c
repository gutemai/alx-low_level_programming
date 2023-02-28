#include "main.h"

/**
 * rev_string - function thats reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len, l, j;
	char var;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	len = l - 1;

	for (j = 0; j < l / 2; j--)
	{
		var = s[j];
		s[j] = s[len];
		s[len] = var;
	}
}
