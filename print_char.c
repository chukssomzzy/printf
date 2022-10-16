# include "_printf.h"
# include <stdarg.h>

/**
 * print_char - print string character
 * @ap: points to variable argument
 *
 * Return: (0);
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	if (c)
		return (_putchar(c));
	return (0);
}
