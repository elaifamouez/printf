#include "main.h"
/**
 * print_binary - prints a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list l, flags_t *f)
{
unsigned int num = va_arg(l, unsigned int);
static char *rep;
static char buffer[50];
char *ptr, *str;
int base = 2, lowercase = 0;

rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = rep[num % base];
num /= base;
} while (num != 0);
str = ptr;
(void)f;
return (_puts(str));
}
