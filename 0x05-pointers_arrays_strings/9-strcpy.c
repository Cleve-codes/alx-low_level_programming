#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies a tring from one pointer to another includeing
 * the null byte
 *
 * @src: source of string parameter input
 * @dest: Destination of string
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
