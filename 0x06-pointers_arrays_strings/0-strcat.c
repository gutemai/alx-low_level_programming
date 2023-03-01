#include "main,h"

/**
 * _strcat - concatenates the 2 string
 * @dest:string concatenate to
 * @src: string concatenated from
 * Return:pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;

	while (dest[i] != '\0')
		dest_len++;
	i = 0;

	while (src[i] != '\0')
	{
		dest[dest_len++] = src[i];
		i++;
		dest_len++;
	}
	dest[i] = '\0';

	return (dest);
}

