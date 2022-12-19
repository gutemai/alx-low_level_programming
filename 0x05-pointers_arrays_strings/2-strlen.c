#include "main.h"
/**
 *  _strlen - returs the length of a string.
 *  @s: string
 *  Return:0
 */
int _strlen(char *s)
{
	int n;

	n = 0
	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}
