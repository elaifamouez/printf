#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

#define BUFFER_SIZE 1024
/**
 * struct modifier - mofifier fields collection
 * @flags: flags field composed of ['0', ' ', '#', '+', '-']
 * @width: width field, positive number
 * @precision: precision field positive number not including '.'
 * or -1 for '*'
 * @length: length field string composed of ['h', 'l']
 * @specifier: specifier character can one of
 * ['c', 's', '%', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'S', 'p', 'r', 'R']
 *
 */
typedef struct modifier
{
char *flags;
int width;
int precision;
char *length;
char specifier;
} modifier_t;
/**
 * struct print - multiple choice print
 * @f: char Type of print
 * @func: funct
 */
typedef struct print
{
char f;
char *(*func)(modifier_t *, va_list);
} t_print;
int _printf(const char *format, ...);
char *(*get_print_func(char c))(modifier_t *, va_list);
modifier_t *get_modifier(const char *, unsigned int *);
char *print_binary(modifier_t *, va_list);
char *print_unsigned_int(modifier_t *, va_list);
char *print_octal(modifier_t *, va_list);
char *print_hex(modifier_t *, va_list);
char *print_char(modifier_t *, va_list ap);
char *print_int(modifier_t *, va_list ap);
char *print_string(modifier_t *modif, va_list ap);
char *print_rev(modifier_t *, va_list ap);
char *print_big_s(modifier_t *, va_list);
char *print_pointer(modifier_t *, va_list);
char *print_rot(modifier_t *, va_list ap);
char *get_flags(const char *, unsigned int *);
char *get_length(const char *, unsigned int *);
char get_specifier(const char *, unsigned int *);
int get_width(const char *, unsigned int *);
int get_precision(const char *, unsigned int *);
char *reverse(char *s);
char *rot13(char *s);
char *_strcpy(char *dest, char *src);
int int_len(int num);
int _strlen(char *s);
int _putchar(char c);
int _isalpha(char c);
char *ctox(char c);
void free_modifier(modifier_t *);
void array_rev(char *arr, int len);
void *_realloc(void *ptr, unsigned int, unsigned int);
void treat_flags_o(char *flags, char *buffer, int *pos);
void treat_flags(char *flags, char *buffer, int *size);
void treat_flags_hex(char *flags, char *buffer, int *size, char _case);
int buffer_add(char buffer[], char *str, unsigned int *buffer_pos);
int buffer_print(char buffer[], unsigned int nbytes);
char *treat_format(const char *, unsigned int *, va_list);
#endif


