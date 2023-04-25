#include "main.h"
#include <stdlib.h>

/**
 * exit_busy_reset - Reset values of busy, width, precision, and dot to zero
 * upon exit of busy.
 * @help_s: Pointer to structure.
 * @reset_mods: Flag indicator to reset mods. 1 for reset, 0 do nothing.
 * Return: Void.
 */
void exit_busy_reset(printh_t *help_s, int reset_mods)
{
int i;

help_s->busy = 0;
help_s->width = 0;
help_s->precision = 0;
help_s->dot = 0;
for (i = 0; i < 5; i++)
help_s->flags[i] = 0;
if (reset_mods)
{
for (i = 0; i < 2; i++)
help_s->mods[i] = 0;
}
}
