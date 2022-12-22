#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encrypt in rot13
 * @s: Pointer to string
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotation[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = rotation[j];
				break;
			}
		}
	}
	return (s);
}
