#include <stdio.h>

/**
 * main - Prints all lowercase alphabets exept 'e' and 'q'
 * Return: Always 0 id exited well
 */
int main(void)
{
char ch;

ch = 'a';
while (ch <= 'Z')
{
 if (ch != 'e' || ch != 'q')
	{
		putchar(ch);
	}
ch++;
}
putchar('\n');
return (0);
}
