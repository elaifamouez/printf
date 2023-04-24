#include "main.h"

/**
 * treat_flags - treat flags + and ' '
 * @flags: flags string
 * @buffer: to store result
 * @size: size of buffer
 *
 */
void treat_flags(char *flags, char *buffer, int *size)
{
char sign = buffer[(*size) - 1];
int i;

if (flags && sign != '-')
{
for (i = 0; flags[i]; i++)
{
if (flags[i] == ' ')
buffer[*size] = ' ';
}
for (i = 0; flags[i]; i++)
{
if (flags[i] == '+')
buffer[*size] = '+';
}
if (buffer[*size] == '+' || buffer[*size] == ' ')
(*size)++;
}
}
