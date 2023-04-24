#include "main.h"

/**
 * _isalpha - checks if character is alpha or not
 * @c: character to check
 *
 * Return: 1 if is alpha, 0 otherwise
 */
int _isalpha(char c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
return (0);
}
