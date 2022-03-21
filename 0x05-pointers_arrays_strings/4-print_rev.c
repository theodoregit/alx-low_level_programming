#include "main.h"
/**
 * print_rev - print string in reverse order
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0, i = 0;

	while (s[i++])
		l++;

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
