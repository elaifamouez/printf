#include "main.h"
#include <stdio.h>

/**
 * treat_format - treats every case of '%' inside format given at pos
 * @format: string to treat
 * @pos: position of '%' to treat in format (will be modified to mark
 * end of searching position)
 * @ap: va_list pointer containng data to format
 *
 * Return: result string formated
 */
char *treat_format(const char *format, unsigned int *pos, va_list ap)
{
char *(*fun_p)(modifier_t *, va_list);
modifier_t *modif;
unsigned int end_pos;
char *res_str, *aux;

if (!format || !format[(*pos) + 1])
{
(*pos)++;
return (NULL);
}
aux = malloc(sizeof(char) * 2);
aux[0] = '%';
aux[1] = '\0';
if (format[(*pos) + 1] == '%')
{
(*pos) += 2;
return (aux);
}
end_pos = *pos;
modif = get_modifier(format, &end_pos);
if (modif == NULL)
{
(*pos)++;
return (aux);
}
fun_p = get_print_func(modif->specifier);
if (!fun_p)
{
free(modif);
(*pos)++;
return (aux);
}
free(aux);
res_str = fun_p(modif, ap);
free(modif);
*pos = end_pos + 1;
return (res_str);
}
