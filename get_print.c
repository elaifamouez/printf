#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 *
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
switch (s)
{
case 's':
return (print_string);
case 'c':
return (print_char);
case '%':
return (print_percent);
case 'i':
return (print_int);
case 'd':
return (print_int);
default:
return (NULL);
}
}
