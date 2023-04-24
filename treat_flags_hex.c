#include "main.h"

/**
 * treat_flags_hex - treat flags
 * @flags: string of flags
 * @buffer: to store resulr
 * @size: size of buffer
 * @_case: case of characters
 *
 */
void treat_flags_hex(char *flags, char *buffer, int *size, char _case)
{
int i;

for (i = 0; flags && flags[i]; i++)
{
if (flags[i] == '#')
{
buffer[(*size)++] = _case + 23;
buffer[(*size)++] = '0';
}
}
}
