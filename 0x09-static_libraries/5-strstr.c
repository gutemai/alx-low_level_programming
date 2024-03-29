#include "main.h"
/**
 * _strstr - funct locates a substring.
 * @haystack: input
 * @needle: input
 * Return: ptr to located substr or if not  NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
	if (*p == '\0')
	return (haystack);
	}
	return (0);
}
