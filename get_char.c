#include "main.h"
#include <stdlib.h>

/**
 * get_char - gets a pointer to an array containing char and null byte
 * @args: va_list to get argument from of type char
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: pointer to array containing char and null byte
 */
char *get_char(va_list args, char *mods)
{
char *str;
char c;

(void)mods;
c = va_arg(args, int);
str = malloc(2);
if (!str)
return (NULL);
if (c)
str[0] = c;
else
str[0] = '\0';
str[1] = '\0';
return (str);
}
