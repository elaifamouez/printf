#include "main.h"
#include <stdlib.h>

/**
 * get_octal - gets a string representing an unsigned octal.
 * @args: va_list to get unsigned octal from.
 * @mods: array containing length modifier bytes, representing t/f for l & h
 *
 * Return: char pointer to new memory location of string. NULL if malloc fails.
 */
char *get_octal(va_list args, char *mods)
{
int num_i;
unsigned int num;
unsigned long int num_l;
int length;
char *ret;

if (mods[0] > 0 && mods[1] == 0) /* l byte is lit, h is not */
{
num_l = va_arg(args, unsigned long int);
length = get_longnumbase_len(num_l, 8);
}
else if (mods[1] > 0 && mods[0] == 0) /* h byte lit, l is not */
{
num_i = va_arg(args, int);
num = _abs(num_i);
length = get_numbase_len(num, 8);
}
else /* both are lit (cancels out), or no length mods are lit */
{
num = va_arg(args, unsigned int);
length = get_numbase_len(num, 8);
}
ret = malloc(length + 1);
if (!ret)
return (NULL);
if (mods[0] > 0 && mods[1] == 0)
fill_longnumbase_buff(num_l, 8, ret, length);
else
fill_numbase_buff(num, 8, ret, length);
return (ret);
}
