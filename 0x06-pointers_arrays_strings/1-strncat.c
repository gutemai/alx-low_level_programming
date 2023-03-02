#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates the 2 string
 *@dest:destination string
 *@src:source string
 *@n:number of bytes that concatenated
 *Return:pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = strlen(dest);

	dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; scr[i]; i < n; i++)
	{
		dest[dest_len++] = src[i];
	}

	return (dest);

}
