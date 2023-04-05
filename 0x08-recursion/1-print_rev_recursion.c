#include "main.h"

/**
 * _print_rev_recursion - prins a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
