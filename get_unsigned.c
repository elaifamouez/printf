#include "main.h"
#include <stdlib.h>

/**
 * get_unsigned - gets a string representing an unsigned integer
 * @args: va_list to get unsigned integer from
 * @mods: array containing length modifier bytes, representing t/f for l & h
 *
 * Return: char pointer to new memory location of string
 */
char *get_unsigned(va_list args, char *mods)
{
int num_i;
unsigned int num;
unsigned long int num_l;
int length;
char *ret;

if (mods[0] > 0 && mods[1] == 0) /* l byte is lit, h is not */
{
num_l = va_arg(args, unsigned long int);
length = get_longnumbase_len(num_l, 10);
}
else if (mods[1] > 0 && mods[0] == 0) /* h byte lit, l is not */
{
num_i = va_arg(args, int);
num = _abs(num_i);
length = get_numbase_len(num, 10);
}
else /* both are lit (cancels out), or no length mods are lit */
{
num = va_arg(args, unsigned int);
length = get_numbase_len(num, 10);
}
ret = malloc(length + 1); /* create new string */
if (!ret)
return (NULL);
if (mods[0] > 0 && mods[1] == 0)
fill_longnumbase_buff(num_l, 10, ret, length);
else
fill_numbase_buff(num, 10, ret, length);
return (ret);
}
