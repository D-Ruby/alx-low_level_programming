#include <stdio.h>
/**
 * main - Printing alphabet in both lower and upper case
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar (c);
		c++;
	}

	putchar('\n');
	return (0);
}
