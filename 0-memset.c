#include "main.h"
/**
*_memset -fill a block of memory with  a specific value
*@s:starting adress of memory  to be filled
*@b:required value
*@n:the number of bytes to be changed
*
*Return:set a variable with a new value of n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
