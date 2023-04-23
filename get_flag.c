#include "main.h"
/**
 * get_flag - turns on flags if _printf finds
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
int i = 0;

if (s == '+')
{
f->plus++;
i = 1;
}
else if (s == ' ')
{
f->space++;
i = 1;
}
else if (s == '#')
{
f->hash++;
i = 1;
}
return (i);
}
