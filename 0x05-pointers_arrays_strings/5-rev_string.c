#include "main.h"

/**
 * rev_string - function thats reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len;
	int i;
	char var;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (j = 0; j < len / 2; j++)
	{
		var = s[j];
		s[i] = s[len - 1 - j];
		s[len - 1 - j] = var;
	}
}
