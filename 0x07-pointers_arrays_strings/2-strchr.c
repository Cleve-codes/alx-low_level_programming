#include"main.h"
#include<string.h>
/**
 * _strchr - A function that locates a character in a string
 * @s: Pointer to string array input
 * @c: character to locate from the string
 * Return: First occurrence of character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c = '\0' return s
	 */
	if (*s == c)
		return (s);
	/*Return Null if not found*/
	return ('\0');
}
