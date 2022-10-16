# include "_printf.h"
# include <stdarg.h>

/**
 * _printf - prints formatted output
 * @fmt: pointer to format string
 *
 * Return: number of character printed
 */

int _printf(const char *fmt, ...)
{
	va_list ap;
	int i;
	unsigned long int cnt;

	va_start(ap, fmt);
	i = 0;
	cnt = 0;
	while (*(fmt + i))
	{
		if (*(fmt + i) == '%')
		{
			if (*(fmt + i + 1) == '%' || *(fmt + i - 1) == '\\')
				cnt += _putchar(*(fmt + ++i));
			else if (get_fmt_fun(fmt + i + 1))
				cnt += get_fmt_fun((fmt + ++i))(ap);
		}
		else
			cnt += _putchar(*(fmt + i));
		i++;
	}
	return (cnt);
}
