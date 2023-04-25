#define NULL 0
#include "main.h"

/**
 * is_printable - checks if a character is printable
 * @c: character to check
 *
 * Return: 1 if printable, 0 otherwise
 */
int is_printable(char c)
{
if (c >= 32 && c < 127)
{
return (1);
}
return (0);
}
