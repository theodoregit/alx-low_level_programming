#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 */
void _puts(*str)
{
	while (char *str)
		_putchar(*str++);

	_putchar('\n');
}
