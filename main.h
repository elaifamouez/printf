#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;
/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
char c;
int (*f)(va_list ap, flags_t *f);
} ph;
/* _putchar */
int _putchar(char c);
/* _puts */
int _puts(char *ch);
/* _printf */
int _printf(const char *format, ...);
/* get_print */
int (*get_print(char s))(va_list, flags_t *);
/* get_flag */
int get_flag(char s, flags_t *f);
/* print_string */
int print_string(va_list l, flags_t *f);
/* print_char */
int print_char(va_list l, flags_t *f);
/* print_percent */
int print_percent(va_list l, flags_t *f);
#endif
