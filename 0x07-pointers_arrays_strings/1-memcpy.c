#include "main.h"
/**
 * _memcpy - fun copies memory area.
 *@dest:destination
 *@src:source
 *@n:number of bytes copied
 *Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	return (dest);
}
