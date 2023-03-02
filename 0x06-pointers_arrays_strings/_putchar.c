#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c:char to print
 * Return:on success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
