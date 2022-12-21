#include "main.h"
/**
 *_strcmp - a function that compares two strings
 * @s1: First string to compare
 * @s2: Second string to commpare
 * Return: 0 if they are same -
 * if stopping character in s1 is
 * less than the one in
 * s2 and vice versa
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
