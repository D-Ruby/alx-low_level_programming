#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all single number of base 10
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
