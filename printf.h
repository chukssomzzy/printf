# ifndef _PRINTF_H_
# define _PRINTF_H_
# ifndef NULL
# define NULL ((void *)0)
# endif
# ifndef stdout
# define stdout 1
# endif
# include <stdarg.h>
/*
 * struct printf_fmt - holds format string and function
 * @fmt_f: character string holding the format
 * @fun_f: holds format functions
 *
 * Description: datastructure for printf
 */

struct printf_fmt
{
	char *fmt_f;
	void (*fun_f)(va_list);
};
/**
 * print_fmt_t - type alias for printf_fmt
 */

typedef struct printf_fmt printf_fmt_t;
int _putchar(const char);
int _printf(const char *format, ...);
# endif
