#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: type const char pointer of one bit
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
unsigned int dec = 0;

if (b == NULL)
return (0);
while (*(b + n) != '\0')
{
if (*(b + n) != '0' && *(b + n) != '1')
return (0);
dec <<= 1;
if (*(b + n) == '1')
dec ^= 1;
n++;
}
return (dec);
}
