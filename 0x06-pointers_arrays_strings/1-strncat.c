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
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);

}
