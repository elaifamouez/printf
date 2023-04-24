#include "main.h"

/**
 * print_percent - function to print %
 * @args: unused
 * @f: flag struct
 * Return: always 1
 */
int print_percent(__attribute__((unused))va_list args, flags_t *f)
{
(void)f;
_putchar('%');
return (1);
}
