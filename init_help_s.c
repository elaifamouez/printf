#include "main.h"
#include <stdlib.h>

/**
 * init_help_s - initializes print helper structure, creating space for it
 * @format: pointer to format specifier string to set as pointer
 * @args: va_list pointer, will be sent to free_all to have memory freed if a
 * malloc fails.
 *
 * Return: pointer to structure created in memory
 */
printh_t *init_help_s(const char *format, va_list args)
{
printh_t *help_s = malloc(sizeof(*help_s));

if (!help_s)
return (NULL);
help_s->flags = calloc(5, sizeof(int));
help_s->mods = calloc(2, sizeof(char));
help_s->buff = create_buff(BUFF_SIZE);
help_s->c = create_buff(2);
help_s->format = format;
help_s->dot = help_s->busy = help_s->f_i = help_s->buff_i = 0;
help_s->beg_i = help_s->buff_len = help_s->width = 0;
help_s->precision = help_s->spec_c = 0;
if (!help_s->flags || !help_s->mods || !help_s->buff || !help_s->c)
{
free_all(help_s, args);
return (NULL);
}
return (help_s);
}