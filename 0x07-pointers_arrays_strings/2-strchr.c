#include "main.h"
/**
 * _strchr -  func locates a char in a str
 *@s:string for char searched
 *@c:char in the str searched
 *Return:ptr to 1st occurrence of c in str or NULL if not
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s != c)
		{
			return ('\0');
		}
	       s = s + 1;
	}
	return (0);
}
