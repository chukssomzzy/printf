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
	int j = 0;

	do {
		switch (*(fmt + j))
		{
			case '#':
				if (!flag->flag_hash)
					flag->flag_hash = 1;
				*i += 1;
				break;
			case ' ':
				if (!flag->flag_space)
					flag->flag_space = 1;
				*i += 1;
				break;
			case '+':
				if (!flag->flag_plus)
					flag->flag_plus = 1;
				*i += 1;
				break;
			default:
				break;
		}
		j++;
	} while (j < 3);

	if (get_fmt_fun(fmt))
	{
		*i += 1;
		return (*cnt += get_fmt_fun(fmt)(ap, flag));
	}

	return (0);
}
