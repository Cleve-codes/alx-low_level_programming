#include"main.h"
/**
 * _strpbrk - A function to a string
 * of any number of bytes
 * @s: pointer to input string
 * @accept: Pointer to string to be searxhed from
 * Return: Pointer to buytes in s or null if no such
 * byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
