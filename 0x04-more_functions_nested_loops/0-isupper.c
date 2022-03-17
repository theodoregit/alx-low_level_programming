#include "main.h"
/**
 * _isupper - checks for upper case chars
 * @c: given letter\
 * Return: 1 and 0 for success and failure responibly
 */
int m_isupper(char c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
