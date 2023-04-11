#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (;s[size] != '\0'; size++)
	return (size);
}

/**
 * str_concat - contactenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *h;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	h = malloc((size1 + size2) * sizeof(char) + 1);
	if (h == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			h[i] = s1[i];
		else
			h[i] = s2[i - size1];
	}
	h[i] = '\0';
	return (h);
}
