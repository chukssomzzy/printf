# include "main.h"
# include <stdarg.h>

/**
 * print_u - print number as an unsigned int
 * @ap: argument pointer
 *
 * Return: count
 */


int print_u(va_list ap)
{
	int cnt = 0;
	unsigned int uint = va_arg(ap, unsigned int);
	char *s;

	if (!uint)
		return (write_string("(nil)", 5));
	s = convert(uint, 10, 1);
	cnt  = write_string(s, _string_len(s));
	return (cnt);
}
