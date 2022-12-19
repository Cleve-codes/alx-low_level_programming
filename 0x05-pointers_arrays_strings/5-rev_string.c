#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Placeholder for string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length, i;
	char ch;

	/*Find length of a string without a null value*/
	for (length = 0; s[length] != '\0'; ++length)
		;

	/*Looping to half the string so as to swap*/
	for (i = 0; i < length / 2; ++i)
	{
		ch = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = ch;
	}

}
