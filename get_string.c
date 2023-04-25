#include "main.h"
#include <stdlib.h>

/**
 * get_string - gets a pointer to a string, null terminated
 * @args: va_list to get argument of type char
 * @mods: length modifiers, voided, not used with this specifier*
 *
 * Return: pointer to beginning of string
 */
char *get_string(va_list args, char *mods)
{
char *str;
char *ret;

(void)mods;
str = va_arg(args, char *);
if (str)
{
ret = malloc(_strlen(str) + 1);
if (!ret)
return (NULL);
ret = _strcpy(ret, str);
}
else
{
ret = malloc(6 + 1);
if (!ret)
return (NULL);
ret = _strcpy(ret, "(null)");
}
return (ret);
}
