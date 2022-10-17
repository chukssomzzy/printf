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
 * printf_fmt - holds format string and function
 * @fmt_f: character string holding the format
 * @fun_f: holds format functions
 *
 * Description: datastructure for printf
 */

typedef struct printf_fmt
{
	char *fmt_s;
	int (*fun_f)(va_list);
} printf_fmt_t;

int _putchar(const char);
int _printf(const char *, ...);
int print_char(va_list);
int print_string(va_list);
int (*get_fmt_fun(const char * const fmt))(va_list);
int write_string(const char * const, const unsigned int);
int _string_len(const char * const s);

# endif