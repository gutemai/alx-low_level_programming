#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char l;

	for (l = '0'; l <= 'z'; l++)
		_puchar(l);

	_putchar('\n');
}
