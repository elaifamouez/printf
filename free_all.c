#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * free_all - Frees all memory in structure and args.
 * @help_s: The pointer to a malloced structure.
 * @args: Pointer to a va_list.
 *
 * Return: Void.
 */
void free_all(printh_t *help_s, va_list args)
{
if (help_s)
{
if (help_s->flags)
free(help_s->flags);
if (help_s->buff)
free(help_s->buff);
if (help_s->c)
free(help_s->c);
if (help_s->mods)
free(help_s->mods);
free(help_s);
}
va_end(args);
}

