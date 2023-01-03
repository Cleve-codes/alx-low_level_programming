#include"main.h"
/**
 * _strstr - Function to locate a substring
 * @haystack: input string to search from
 * @needle: substring to search for
 * Return: Pointer to begining of located substring
 * or null if not located
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
