#include "main.h"
/**
 * print_diagonal - function draws diagonal line using \ char
 * @n:number of times \ printed
 */
void print_diagonal(int n)
{
	int i, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp < i; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
