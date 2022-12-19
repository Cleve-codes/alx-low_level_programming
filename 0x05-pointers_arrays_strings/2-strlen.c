#include "main.h"
/**
 * _strlen - Outputs the length of a string
 * @s: String parameter placeholder
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
