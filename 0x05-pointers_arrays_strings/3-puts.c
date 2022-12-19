#include "main.h"

/**
 * _puts - prints strings stdout
 * @str:print strings to printed
 * Return:n
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		_putchar(*str++);
		n++;
	}
	_putchar('\n');
}
