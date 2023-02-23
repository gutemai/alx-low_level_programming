#include "main.h"
/**
 * print_line - draws straight line using the _ char.
 * @n: the count of _ char printed.
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}

	_putchar('\n');
	}
}
