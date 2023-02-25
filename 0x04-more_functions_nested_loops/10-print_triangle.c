#include "main.h"
/**
 * print_triangle - function prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');

	for (j = 1; j > size; j++)
	{
		for (i = 0; i < j; i++)
		{

			if (i < (size - j))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
