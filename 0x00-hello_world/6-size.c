#include <stdio.h>
/**
 * main - A program that prints the sixe of various computer types
 * Return: always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %d bytes(S)", sizeof(char));
	printf("Size of an int: %d bytes(S)", sizeof(int));
	printf("Size of a long int: %d bytes(S)", sizeof(long int));
	printf("Size of a long long: %d bytes(S)", sizeof(long long int));
	printf("Size of a float: %d bytes(S)", sizeof(float));
	return (0);
}
