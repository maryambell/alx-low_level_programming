#include <unistd.h>

/**
 * _putchar - writes the character c to standout
 * @c: the character to print
 * On error, -1 is returned, and errno is set appropriately.
 * Return: On success 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
