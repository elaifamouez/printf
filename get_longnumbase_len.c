#include "main.h"
#include <stdlib.h>

/**
 * get_longnumbase_len - gets length of buff needed for long unsigned int
 * @num: number to get length needed for
 * @base: base of number representation that will be used by buffer
 *
 * Return: integer containing length of buffer needed ( no null byte )
 */
int get_longnumbase_len(unsigned long int num, unsigned int base)
{
int len = 1;

while (num > (unsigned long int)base - 1)
{
len++;
num /= (unsigned long int)base;
}
return (len);
}
