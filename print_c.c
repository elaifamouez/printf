#include "main.h"

/**
 * print_c - function to print character
 * @arg: characters to print
 * @f: flag struct
 * Return: number of character or -1 if failed
 */
int print_c(va_list arg, flags_t *f)
{
char ch = va_arg(arg, int);

(void)f;
return (_putchar(ch));
}
