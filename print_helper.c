#include "main.h"
#include <stdlib.h>

/**
 * print_helper - print helper function to split up logic of _printf
 * @help_s: pointer to our helper struct to contain variables for passing
 * @args: va_list of args to advance and use
 *
 * Return: 1 on success, 0 on failure
 */
int print_helper(printh_t *help_s, va_list args)
{
int flag_index, mod_index;

flag_index = is_flag(help_s->format[help_s->f_i],
help_s->format[help_s->f_i - 1]);
mod_index = is_modifier(help_s->format[help_s->f_i]);
if (flag_index > -1)
help_s->flags[flag_index] = 1;
else if (!mod_index)
(help_s->spec_c)++;
if (_isalpha(help_s->format[help_s->f_i])
|| help_s->format[help_s->f_i] == '%')
{
return (handle_alpha_percent(help_s, args));
}
else if (_isdigit(help_s->format[help_s->f_i]) ||
help_s->format[help_s->f_i] == '.' ||
help_s->format[help_s->f_i] == '*')
get_width_precision(help_s, args);
else if (help_s->format[(help_s->f_i) + 1] == '\0')
{
if (help_s->spec_c)
{
help_s->f_i = help_s->beg_i;
help_s->buff[(help_s->buff_i)++] = help_s->format[help_s->f_i];
help_s->buff_len++;
exit_busy_reset(help_s, 0);
}
else
return (0);
}
return (1);
}
