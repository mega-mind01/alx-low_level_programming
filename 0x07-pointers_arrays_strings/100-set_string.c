#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: source of pointer to pointer
 * @to: recepient address
 */

void set_string(char **s, char *to)
{
	*s = to;
}
