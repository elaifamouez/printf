#include "main.h"
#include <stdlib.h>

/**
 * get_hex_upper - gets a string that is the upper case hex rep of an integer
 * @args: va_list to get integer for conversion from
 * @mods: array containing length modifier bytes, representing t/f for l & h
 *
 * Return: char pointer to new hex string
 */
char *get_hex_upper(va_list args, char *mods)
{
char *ret;

ret = get_hex(args, mods);
_string_upper(ret);
return (ret);
}
