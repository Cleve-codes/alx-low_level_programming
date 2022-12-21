#include "main.h"
/**
 * _strcat - Function that concatentes two strings
 * @src: Source string which is to be concateneated
 * @dest: Pointer to destination
 *
 * Return: Pointer resulting to a string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	/*First find the size of dest*/
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[b] = src[b];

	return (dest);
}
