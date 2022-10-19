# include "main.h"
# include <stdarg.h>

/**
 * print_u - print number as an unsigned int
 * @ap: argument pointer
 *
 * Return: count
 */


int print_u(va_list ap, flag_input_t *flag)
{
	int cnt = 0;
	unsigned int uint = va_arg(ap, unsigned int);
	char *s;

	if (!uint)
		return (write_string("(nil)", 5));
	s = convert(uint, 10, 1);
	cnt  += write_string(s, _string_len(s));
	return (cnt);
}

/**
 * print_x - print  in hexadecimals
 * @ap: argument pointer
 *
 * Return: count
 */
int print_x(va_list ap, flag_input_t *flag)
{
	int cnt = 0;
	unsigned int uint = va_arg(ap, unsigned int);
	char *s;

	if (!uint)
		return (write_string("(nil)", 5));
	cnt += _putchar('0');
	cnt += _putchar('x');
	s = convert(uint, 16, 1);
	cnt  += write_string(s, _string_len(s));
	return (cnt);
}

/**
 * print_X - print in hexadecimals
 * @ap: arguments pointer
 *
 * Return: cnt
 */


int print_X(va_list ap, flag_input_t *flag)
{
	int cnt = 0;
	unsigned int uint = va_arg(ap, unsigned int);
	char *s;

	if (!uint)
		return (write_string("(nil)", 5));
	cnt += _putchar('0');
	cnt += _putchar('X');
	s = convert(uint, 16, 0);
	cnt  += write_string(s, _string_len(s));
	return (cnt);
}

/**
 * print_o - print in hexadecimals
 * @ap: arguments pointer
 *
 * Return: cnt
 */


int print_o(va_list ap, flag_input_t *flag)
{
	int cnt = 0;
	unsigned int uint = va_arg(ap, unsigned int);
	char *s;

	if (!uint)
		return (write_string("(nil)", 5));
	cnt += _putchar('0');
	s = convert(uint, 10, 0);
	cnt  += write_string(s, _string_len(s));
	return (cnt);
}
