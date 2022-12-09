#include <stdio.h>
#include <unistd.h>

/**
 * main - Outputs the sentence in quotes
 * Return: Zero if exited succesfully
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
