#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)

{
unsigned int h;
char *z;
h = 1;
z = (char *) &h;
return ((int)*z);
}
