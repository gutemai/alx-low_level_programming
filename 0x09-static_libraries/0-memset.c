#include "main.h"
/**
 * _memset - func fills memory with a constant byte
 *@s:char str
 *@b:cons bytes
 *@n:number of bytes to be filled
 *Return:a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
