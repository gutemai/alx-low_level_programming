#include "main.h"
/**
 * print_rev - printing string in the reverse
 *@s: the string value
 *Return:output
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
