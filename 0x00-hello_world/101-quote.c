#include<stdio.h>
#include<stdlib.h>
/**
 * main - std error
 * Description: desc
 * Return: 1 std error
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);
	return (1);
}
