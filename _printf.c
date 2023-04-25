#include "main.h"
#include <stdlib.h>

/**
  * _printf - Prints variatic arguments based on format string.
  * @format: String passed, may contain zero, or more directives.
  *
  * Return: Number of characters printed to stdout.
  */
int _printf(const char *format, ...)
{
int E;
unsigned int t_bytes;
va_list args;
printh_t *help_s;

if (!format)
return (-1);
va_start(args, format);
help_s = init_help_s(format, args);
if (!help_s)
return (-1);
E = 0;
while (format[help_s->f_i])
{
if (format[help_s->f_i] == '%' && !help_s->busy)
{
help_s->beg_i = help_s->f_i;
help_s->busy = 1;
if (format[help_s->f_i + 1] == '\0')
{
if (help_s->spec_c)
{
help_s->buff[help_s->buff_i++] = format[help_s->f_i];
help_s->buff_len++;
exit_busy_reset(help_s, 1);
}
else
{
free_all(help_s, args);
return (-1);
}
}
}
else if (help_s->busy)
{
E = print_helper(help_s, args);
if (!E)
{
free_all(help_s, args);
return (-1);
}
}
else if (!(format[help_s->f_i] == 'l' && help_s->mods[0])
&& !(format[help_s->f_i] == 'h' && help_s->mods[1]))
{
help_s->c[0] = format[help_s->f_i];
help_s->c[1] = '\0';
help_s->buff_len += copy_buff(help_s->c, help_s);
}
else
{
help_s->mods[0] = 0;
help_s->mods[1] = 0;
}
help_s->f_i++;
}
if (help_s->busy && format[help_s->f_i] == '\0')
{
print_buff(help_s->buff, help_s->beg_i - 1);
free_all(help_s, args);
return (-1);
}
print_buff(help_s->buff, help_s->buff_i);
t_bytes = help_s->buff_len;
free_all(help_s, args);
return (t_bytes);
}
