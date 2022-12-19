#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string parameter input placeholder
 * Return: Nothing to return
 */
void print_rev(char *s)
{
	int position;

	/*To find the lenght of a string*/
	for (position = 0; s[position] != '\0'; ++position)
		;

	/*To print the string in reverse*/
	for (--position; position >= 0; --position)
		_putchar(s[position]);
	_putchar('\n');
}
