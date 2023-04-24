#include "main.h"

/**
 * treat_flags_o - treat flags
 * @flags: string of flags
 * @buffer: to store result
 * @pos: size of buffer
 *
 */
void treat_flags_o(char *flags, char *buffer, int *pos)
{
int i;

for (i = 0; flags && flags[i]; i++)
{
if (flags[i] == '#')
buffer[(*pos)++] = '0';
}
}
