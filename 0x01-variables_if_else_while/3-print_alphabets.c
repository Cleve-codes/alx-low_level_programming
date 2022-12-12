#include <stdio.h>

/**
 * main - Outputs alphabet in both lower and upercase
 * then a new line
 * Return: Always ) if succesful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
