#include "main.h"
#include <stdlib.h>

/**
 * get_numbase_len - gets length of buffer needed for an unsigned int
 * @num: number to get length needed for
 * @base: base of number representation used by buffer
 *
 * Return: integer containing length of buffer needed (doesn't contain null bt)
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
int len = 1;

while (num > base - 1)
{
len++;
num /= base;
}
return (len);
}
