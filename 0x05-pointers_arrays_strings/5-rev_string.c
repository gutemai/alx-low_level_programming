#include "main.h"

/**
 * rev_string - function thats a string
 * @s: the string
 */
void rev_string(char *s)
{
	int n = 0;
	int j;
	char var = s[0];

	while (s[n] != '\0')
		n++;
	for (j = 0; j < n; j++)
		n--;
		var = s[j];
		s[i] = s[n];
		s[n] = var;
}
