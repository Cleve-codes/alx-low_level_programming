#include <stdio.h>

/**
 * main - Prints all lowercase alphabets in reverse
 * Return: Always 0 if succesful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
