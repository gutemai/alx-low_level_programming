#include "main.h"
/**
 * puts2 - prints an other char of string
 * @str: input char
 * Return:n
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	_putchar('\n');
}
