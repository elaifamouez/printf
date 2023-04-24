#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /*va_list, va_start, va_end*/
#include <stddef.h> /*NULL*/
#include <unistd.h> /* write */

/* function that produces output according to a format */
int _printf(const char *format, ...);

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * @zero: flag for the '0' character
 * @minus: flag for '-' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int zero;
	int minus;
} flags_t;

/**
 *struct format - structure for printing various types
 *@spc: format specifier
 *@f: function to print
 */
typedef struct format
{
	const char spc;
	int (*f)(va_list, flags_t *f);
} format_t;

/* function that prints character */
int _putchar(char c);
int _puts(char *str);
/* helpers */
int (*get_func(const char a))(va_list, flags_t *f);
int print_c(va_list args, flags_t *f);
int print__s(va_list args, flags_t *f);
int print_percent(__attribute__((unused))va_list args, flags_t *f);
int print_i(va_list args, flags_t *f);
int print_d(va_list args, flags_t *f);
int print_b(va_list args, flags_t *f);
int print_u(va_list args, flags_t *f);
int print_o(va_list args, flags_t *f);
int print__x(va_list args, flags_t *f);
char *print_x_helper(unsigned long int num, int base, int lowercase);
int print_X(va_list args, flags_t *f);
int print_S(va_list args, flags_t *f);
int print_p(va_list args, flags_t *f);
int get_flag(char s, flags_t *f);

int print_rev_str(va_list args, flags_t *f);
int print_rot13(va_list args, flags_t *f);

#endif
