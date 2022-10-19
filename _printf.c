# include "main.h"
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
	flag_input_t *flgs = {0};

	va_start(ap, fmt);
	i = 0;
	cnt = 0;
	if (!fmt || (*(fmt + i) == '%' && !*(fmt + i + 1)))
		return (-1);
	if (!(*(fmt + i)))
		return (0);
	while (*(fmt + i))
	{
		if (*(fmt + i) == '%')
		{
			if (*(fmt + i + 1) == '%' || *(fmt + i - 1) == '\\')
				cnt += _putchar(*(fmt + ++i));
			else if ((get_flags(ap, (fmt + i + 1), &cnt, &i, flgs)))
				;
			else
				cnt += _putchar(*(fmt + i));
		}
		else
			cnt += _putchar(*(fmt + i));
		i++;
	}
	return (cnt);
}
