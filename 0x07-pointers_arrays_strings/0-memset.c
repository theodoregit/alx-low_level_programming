#include "main.h"
/**
 * memset - fills memory areas
 * @s: pointer
 * @c: character to fill
 * @n: bytes
 * Return: filled memory areas
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
