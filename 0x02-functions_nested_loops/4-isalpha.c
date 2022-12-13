#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the placeholder for the character
 * Return: 1 if c is a letter, and 0 if else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
