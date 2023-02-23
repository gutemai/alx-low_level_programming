#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 .
 *
 */
void more_numbers(void)
{
	int i = 0, c;

	while (i <= 9)
	{
		c = 0;

		for (c = 0; c <= 14; c++)
		{
			n = c
			if (c > 9)
			{
				_putchar('1');
				n = c % 10;
			}
			_putchar('0' + n);
		}
	}
	_putchar("\n");
	i++;
}
