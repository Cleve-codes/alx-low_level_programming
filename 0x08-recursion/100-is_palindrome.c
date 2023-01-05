#include"main.h"
#include<string.h>
/**
 * is_palindrome - checkes whether a word is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int n, m;

	n = 0;
	m = strlen(s) - 1;
	while (m > n)
	{
		if (s[n++] != s[m--])
			return (0);
	}
	return (1);
}
