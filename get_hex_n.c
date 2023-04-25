#include "main.h"
#include <stdlib.h>

/**
 * get_hex_n - gets a string that is the hex representation of an integer.
 * @num: The unsigned integer.
 *
 * Return: char pointer to the string representation. NULL if malloc fails.
 */
char *get_hex_n(unsigned int num)
{
int length, len = 1;
unsigned int base = 16;
char *ret;

while (num > base - 1)
{
len++;
num /= base;
}
length = len;
ret = malloc(length + 1);
if (!ret)
return (NULL);
fill_numbase_buff(num, 16, ret, length);
return (ret);
}
