#include "main.h"
/**
 * largest_number - compares three integers and return the largest
 * @a: int 1
 * @b: int 2
 * @c: int 3
 * Return: the largest int
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
