#include "main.h"
/**
 * _strncpy - Fuunction to copy a string
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: bytes of source
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * Iterate through src array whre if
	 * there is no null bytes of source
	 * The string placed in dest will not be null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src [i];
	/**
	 * if length of source is less than n then write additional
	 * nullbytes to dest to ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
