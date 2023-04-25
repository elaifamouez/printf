#include "main.h"
#include <stdlib.h>

/**
 * get_binary - convert unsigned integer to binary representation.
 * @args: va_list containing the unsigned integer.
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: char pointer to the binary string. NULL if malloc fails.
 */
char *get_binary(va_list args, char *mods)
{
unsigned int num;
int length;
char *ret;

(void)mods;
num = va_arg(args, unsigned int);
length = get_numbase_len(num, 2);
ret = malloc(length + 1);
if (!ret)
return (NULL);
fill_numbase_buff(num, 2, ret, length);
return (ret);
}
