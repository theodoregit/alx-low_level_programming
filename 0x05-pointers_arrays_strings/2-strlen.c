#include "main.h"
/**
 * _strlen - a fuction that returns the length of a given string
 * @str: string
 * Return: length of a tring
 */
size_t _strlen(const char *str)
{
	size_t l = 0;

	while (*str++)
		l++;

	return (l);
}
