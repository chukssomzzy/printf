# include "printf.h"
# include <stdarg.h>

/**
 * get_fmt_fun - returns format function or null
 * @fmt: fmt string
 *
 * Return: pointer function or null
 */

void (*get_fmt_fun(const char * const fmt))(va_list)
{
	unsigned int i;
	printf_fmt_t fmt_fun[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	i = 0;
	while (*(fmt_fun + i)->fun_f)
		if (*(fmt_fun + i++)->fmt_s == *fmt)
			return ((*(fmt_fun + i + 1)).fun_f);
	return (NULL);
}
