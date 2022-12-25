#include "main.h"
/**
 *_islower - if the char is lower case
 *@c:the char
 *Return:1 if char is lower case , 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
