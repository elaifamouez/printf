#include "main.h"
#include <stdlib.h>

/**
 * is_modifier - checks if a character is a length modifier
 * @c: character to check
 *
 * Return: 1 if modifier, otherwise 0.
 */
int is_modifier(char c)
{
if (c == 'l' || c == 'h')
return (1);
return (0);
}
