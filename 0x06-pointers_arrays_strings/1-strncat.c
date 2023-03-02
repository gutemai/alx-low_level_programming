#include "main.h"
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

        for (dest_len = 0; dest[i++]; dest_len++)

	for (i = 0; i < n && scr[i] != '\0'; i++)
        {
                dest[dest_len + i] = src[i];
        }
	dest[dest_len + i] = '\0';

        return (dest);


}
