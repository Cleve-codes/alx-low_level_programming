#include"main.h"
/**
 * _memcpy - function that copies memory space
 * @dest: Buffer to where we a re suppposed to copy to
 * @src: What is to be copied
 * @n: bytes of src to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
