#include <unistd.h>

/**
 * _putchar - wwrites the character c to stdout
 * @c: char to be printed
 * REturn: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
