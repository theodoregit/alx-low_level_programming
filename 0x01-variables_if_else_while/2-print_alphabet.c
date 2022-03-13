#include <stdio.h>
/**
 * main - prints the alphabet
 * Description:
 * Return: 0 and exit
 */
int main (void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
