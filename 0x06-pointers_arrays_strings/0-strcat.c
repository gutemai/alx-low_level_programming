#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the 2 string
 * @dest:string concatenate to
 * @src: string concatenated from
 * Return:pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}

