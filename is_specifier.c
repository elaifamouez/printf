#define NULL 0
#include "main.h"

/**
  * is_specifier - Checks if the character is a format specifier.
  * @c: The character passed.
  *
  * Return: 1 if the character is a specifier, 0 otherwise.
  */
int is_specifier(char c)
{
char spec[] = {'c', 's', 'S', '%', 'd', 'i', 'b', 'u', 'o', 'x', 'X'
, 'p', 'r', 'R', NULL};

return (ch_in_array(c, spec));
}
