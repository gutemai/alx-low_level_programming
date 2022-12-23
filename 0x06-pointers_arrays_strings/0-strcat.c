#include "main,h"

/**
 * _strcat - concatenates the 2 string
 * @dest:string concatenate to
 * @src: string concatenated from
 * Return:pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}

