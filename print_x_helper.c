#include "main.h"

/**
 * print_x_helper - prints the hexadecimal representation of a decimal number
 * @num: number
 * @base: base
 * @lowercase: flag lowercase or uppercase
 * Return: number of characters printed
 */
char *print_x_helper(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *ptr;

rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = rep[num % base];
num /= base;
} while (num != 0);
return (ptr);
}
