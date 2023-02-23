#include "main.h"
/**
 * print_line - draws straight line using the _ char.
 * @n: the count of _ char printed.
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		length = 0;
		while (length < n)
			_putchar('_');
			length++;
	}
	_putchar('\n');
}
