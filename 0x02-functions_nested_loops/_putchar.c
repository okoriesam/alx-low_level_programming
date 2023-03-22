#include <unistd.h>
/**
 * main - A program that print putchar function
 * Result: 0(success)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
