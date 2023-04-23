#include "main.h"
#include <stdio.h>

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 *
 * @s: character that holds the conversion specifier
 *
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list, flags_t *)
{
ph func_arr[] = {
{'s', print_string},
{'c', print_char},
{'%', print_percent}
};
int flags = 3;
register int i;

for (i = 0; i < flags; i++)
if (func_arr[i].c == s)
return (func_arr[i].f);
return (NULL);
}
/**
 * _printf - produces output according to a format
 *
 * @format: format string containing the characters and the specifiers
 *
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
int (*pfunc)(va_list, flags_t *);
const char *p;
va_list arguments;
flags_t flags = {0, 0, 0};
register int count = 0;

va_start(arguments, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (p = format; *p; p++)
{
if (*p == '%')
{
p++;
if (*p == '%')
{
count += _putchar('%');
continue;
}
while (get_flag(*p, &flags))
p++;
pfunc = get_print(*p);
count += (pfunc) ? pfunc(arguments, &flags) : _printf("%%%c", *p);
}
else
count += _putchar(*p);
}
_putchar(-1);
va_end(arguments);
return (count);
}
