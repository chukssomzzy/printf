# include "main.h"


/**
 * get_flags - get flags passed to printf and pass them to a struct
 * @fmt: pointer to format string
 * @cnt: determines if we have hit a conversion
 * @i: index of fmt
 * @ap: argument pointer
 * @flag: flag struct
 *
 * Return: true or false
 */

int get_flags(va_list ap, const char *fmt, unsigned long
		int *cnt, int *i, flag_input_t *flag)
{

	do {
		switch (*fmt)
		{
			case '#':
				if (!flag->flag_hash)
					flag->flag_hash = 1;
				*i += 1;
				return (1);
			case ' ':
				if (!flag->flag_space)
					flag->flag_space = 1;
				*i += 1;
				return (1);
			case '+':
				if (!flag->flag_plus)
					flag->flag_plus = 1;
				*i += 1;
				return (1);
			default:
				*i += 1;
				return (0);
		}
	} while (get_flags(ap, fmt++, cnt, i, flag));
	if (get_fmt_fun(fmt))
		*cnt += get_fmt_fun(fmt)(ap, flag);
	return (*cnt);
}
