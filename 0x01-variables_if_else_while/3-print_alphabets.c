#include <stdio.h>

/**
 * main-main print alphabet in lowercase, and then in uppercase
 * follow by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
		for (ch = 'a'; ch <= 'Z'; ch++)
			putchar(ch);
		for (ch = 'A'; ch <= 'Z'; ch++)
			putchar(ch);
		putchar('\n');
		return (0);
}
