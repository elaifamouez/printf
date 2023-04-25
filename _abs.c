#include "main.h"
#include <stdlib.h>

/**
 * _abs - gets absolute value of integer
 * @n: integer to get absolute value for
 *
 * Return: unsigned int containing abs
 */
unsigned int _abs(int n)
{
return ((n < 0) ? -(unsigned int)n : (unsigned int)n);
}
