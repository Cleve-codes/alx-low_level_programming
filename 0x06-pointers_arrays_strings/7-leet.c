#include "main.h"
/**
 * leet - function that encodes a string into 1337
 *
 * @s: string input
 * Return: @s
 */
char *leet(char *s)
{
	int i, c = 0;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == lower[i] || s[c] == upper[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
