#include"main.h"
/**
 * _strspn - A function that grtd the length
 * of a substring prefix
 * @s: Pointer to string input
 * @accept: Substrong prefix to look for
 * Return: Number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1; /*flag status */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
	if (k == 1)
		break;
	i++;
	}

	return (i);
}
