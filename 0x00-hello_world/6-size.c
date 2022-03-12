#include<stdio.h>
/**
 * main - will print the size of various
 * types on this computer
 * Return: returns 0 and exit
 */
int main(void)
{
	char aaa = 'a';
	int bbb = 33;
	long int ccc = 3434;
	long long int ddd = 232323;
	float eee = 4.3;

	printf("Size of a char: %c\n", sizeof(aaa));
	printf("Size of an int: %d", sizeof(bbb));
	printf("Size of a long int: %ld\n", sizeof(ccc));
	printf("Size of a long long int: %lld\n", sizeof(ddd));
	printf("Size of a float: %f\n", sizeof(eee));

	return (0);
}
