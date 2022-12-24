#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c:char to print
 * Return:on success 1
 */
int _putchar.c (char c)
{
	return (write(1, &c, 1));
}
