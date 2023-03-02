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
        int i;
        int j;

        for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; j < n && scr[j] != '\0'; j++)
        {
                dest[i + j] = src[j];
        }
        dest[i + j] = '\0';

        return (dest);


}
