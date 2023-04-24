#include "main.h"

/**
 * get_func - function to find a function pointer associated with specifier
 * @a: specifier to find the correct function
 * Return: function pointer
 */
int (*get_func(const char a))(va_list, flags_t *)
{
unsigned int m = 0;

format_t structs_pr[] = {
{'c', print_c},
{'s', print__s},
{'d', print_d},
{'i', print_i},
{'b', print_b},
{'u', print_u},
{'o', print_o},
{'x', print__x},
{'X', print_X},
{'S', print_S},
{'p', print_p},
{'r', print_rev_str},
{'R', print_rot13},
{'%', print_percent},
{'\0', NULL}
};
for (; structs_pr[m].spc; m++)
{
if (a == structs_pr[m].spc)
return (structs_pr[m].f);
}
return (NULL);
}
