#include <stdio.h>
/**
 * main - prints the alphabet
 * Description:
 * Return: 0 and exit
 */
int main(void)
{
	int alpha;

	for (alpha = '0'; alpha <= '8'; alpha++)
	{
		putchar(alpha);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
