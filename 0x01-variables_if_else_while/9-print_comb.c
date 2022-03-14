#include <stdio.h>
/**
 * main - prints the alphabet
 * Description:
 * Return: 0 and exit
 */
int main(void)
{
	int alpha;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		putchar((alpha % 10) + '0');
		if (alpha == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
