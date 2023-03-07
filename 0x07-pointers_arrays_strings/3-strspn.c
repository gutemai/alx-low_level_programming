#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *@s:string for search
 *@accept:char of for str and substr
 *Return:number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i =  0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			i++;
		}
	}
	return (i);
}
