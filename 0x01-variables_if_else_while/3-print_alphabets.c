#include <stdio.h>

/**
 * main-main block
 * Description: Get a random it with 5
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
