#include"main.h"
/**
 * _memset - A function that fills the memory with a constant byte
 * @s: Placholder to pointer of char type representing the
 * memory to be filled
 * @b: input variable of type char representing
 * the character to fill the memory
 * @n: unsigned int var representing
 * number of characters to be filled
 * Return: Returns a pointer to be filled with memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * We need to declare an unsigned int becaue
	 *we will be storing a non-negatove value
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
