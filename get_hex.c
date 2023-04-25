#include "main.h"
#include <stdlib.h>

/**
 * get_hex - gets a string that is the hex representation of an integer
 * @args: va_list to get integer for conversion from
 * @mods: array containing length modifier bytes, representing t/f for l & h
 *
 * Return: char pointer to new hex string
 */
char *get_hex(va_list args, char *mods)
{
int num_i;
unsigned int num;
unsigned long int num_l;
char *ret;

if (mods[0] > 0 && mods[1] == 0) /* l byte is lit, h is not */
{
num_l = va_arg(args, unsigned long int);
ret = get_hex_long_n(num_l);
}
else if (mods[1] > 0 && mods[0] == 0) /* h byte lit, l is not */
{
num_i = va_arg(args, int);
num = _abs(num_i);
ret = get_hex_n(num);
}
else /* both are lit (cancels out), or no length mods are lit */
{
num = va_arg(args, unsigned int);
ret = get_hex_n(num);
}
return (ret);
}
