#include <stdio.h>

/**
 * main-main print alphabet in lowercase, and then in uppercase
 * follow by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
