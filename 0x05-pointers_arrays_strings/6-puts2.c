#include "main.h"

/**
 * puts2 - prints 1 char of the 2 stdout 
 * @str: printed string
 * Return:0
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
