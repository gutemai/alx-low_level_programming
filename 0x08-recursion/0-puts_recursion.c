#include "main.h"
/**
 * _puts_recursion - function prints string followed by a new line.
 *
 *@s:string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n')
		return;
	}
	putchar(*s);
	-puts_recursion(s + 1);
}
