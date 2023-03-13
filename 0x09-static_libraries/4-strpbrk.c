#include "main.h"
/**
 *_strpbrk - searches a str for any of bytes.
 *@s:str search to relate
 *@accept:str searched from
 *Return:bytes that matches or if not NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s = s + 1;
	}
	return ('\0');
}
