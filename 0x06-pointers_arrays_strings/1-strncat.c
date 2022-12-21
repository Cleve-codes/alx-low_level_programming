#include "main.h"
/**
 * _strncat - Function that concatenates 2 strings
 * @dest: Pointer to destination
 * @src: pointer from source
 * @n: Most number of bytes from src
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
	{
		c++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
		dest[c + i] = '\0';
	}

	return (dest);
}
