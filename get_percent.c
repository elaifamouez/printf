#include "main.h"
#include <stdlib.h>

/**
 * get_percent - gets a pointer to a string literal containing "%\0"
 * @args: va_list required for function pointer, voided, not used
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: pointer to string literal containing %
 */
char *get_percent(va_list args, char *mods)
{
char *str;

(void)mods;
if (args)
{
}
str = malloc(2);
if (!str)
return (NULL);
str[0] = '%';
str[1] = '\0';
return (str);
}
