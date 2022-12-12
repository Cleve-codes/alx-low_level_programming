#include <stdio.h>
/**
 * main - Prints hexadecimal numbers
 * Return: Always zero if succesfully exited
 */
int main(void)
{
	int n;

	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
