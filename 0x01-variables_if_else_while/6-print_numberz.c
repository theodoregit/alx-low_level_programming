#include <stdio.h>
/**
 * main - prints the alphabet
 * Description:
 * Return: 0 and exit
 */
int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
