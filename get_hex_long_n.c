#include "main.h"
#include <stdlib.h>

/**
 * get_hex_long_n - gets a string that is hex rep of a long int
 * @num: the long unsigned integer to convert
 *
 * Return: char pointer to the string representation. NULL if malloc fails
 */
char *get_hex_long_n(unsigned long int num)
{
int length, len = 1;
int rem, i;
unsigned int base = 16;
char *ret;

while (num > (unsigned long int)base - 1)
{
len++;
num /= (unsigned long int)base;
}
length = len;
ret = malloc(length + 1);
if (!ret)
return (NULL);
ret[length] = '\0';
i = length - 1;
while (i >= 0)
{
rem = num % (unsigned long int)base;
if (rem > 9)
ret[i] = rem + 87;
else
ret[i] = rem + '0';
num /= (unsigned long int)base;
i--;
}
return (ret);
}
