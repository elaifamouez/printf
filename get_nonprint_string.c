#include "main.h"
#include <stdlib.h>

/**
 * get_nonprint_string - gets a pointer to a string in memory containing np's
 * @args: va_list to get string containing non printables
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: pointer to newly allocated string containing hex's for np's
 */
char *get_nonprint_string(va_list args, char *mods)
{
char *str, *ret;
int length, i;

(void)mods;
str = va_arg(args, char *);
length = 0;
i = 0;
while (str[i])
{
if (!is_printable(str[i]))
{
length += 4;
}
else
length++;
i++;
}
i = 0;
ret = malloc(length + 1);
if (!ret)
return (NULL);
if (!fill_nonprint_buffer(length, ret, str))
{
free(ret);
return (NULL);
}
return (ret);
}
