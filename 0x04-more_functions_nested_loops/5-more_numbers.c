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

		while (c <= 14)
			_putchar(c);
			c++;
	}
	_putchar("\n");
	i++;
}
