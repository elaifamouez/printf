#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * @...: arbitrary number of arguments
 * Return: the number characters printed exluding '\0'
 */
int _printf(const char *format, ...)
{
int count = 0, i = 0;
va_list args;
int (*func)(va_list, flags_t *);
flags_t flags = {0, 0, 0, 0, 0};

va_start(args, format);
if (format == NULL)
return (-1);
while (format[i])
{
if (format[i] == '%')
{
i++;
if (!(format[i]))
return (-1);
/* check for flags*/
while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
{
if (format[i] == '+')
flags.plus = 1;
else if (format[i] == ' ')
flags.space = 1;
else if (format[i] == '#')
flags.hash = 1;
i++;
}
func = get_func(format[i]);
if (func == NULL)
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
else
{
count += func(args, &flags);
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
