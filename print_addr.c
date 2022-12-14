# include "main.h"
# include <stdarg.h>

/**
 * print_addr - print memory address
 * @ap: argument pointer variable
 * @flg: flags
 * Return: number of char
 */


int print_addr(va_list ap, flag_input_t *flg)
{
	int i, cnt = 0;
	unsigned long int p =  va_arg(ap, unsigned long int);
	char *s;

	if (!p && flg)
		return (write_string("(nil)", 4));
	cnt += _putchar('0');
	cnt += _putchar('x');
	s = convert(p, 16, 1);
	i = _string_len(s);
	cnt = (write_string(s, i));
	return (cnt);
}


