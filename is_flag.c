#define NULL 0
#include "main.h"

/**
  * is_flag - Checks if the character is a format flag.
  * @c: The character passed.
  * @prev_c: The previous character.
  *
  * Return: index if the character is a flag, -1 otherwise.
  */
int is_flag(char c, char prev_c)
{
char flags[] = { '+', ' ', '#',  '-', '0', NULL };
int i = 0;

while (flags[i])
{
if (c == flags[i])
{
if (c == '0' && _isdigit(prev_c))
return (-1);
return (i);
}
i++;
}
return (-1);
}
