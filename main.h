# ifndef _PRINTF_H_
# define _PRINTF_H_
# ifndef NULL
# define NULL ((void *)0)
# endif
# ifndef BASE10
# define BASE10 10
# endif
# ifndef BASE2
# define BASE2 2
# endif
# ifndef BASE16
# define BASE16 16
# endif
# ifndef std_out
# define std_out 1
# endif
# include <stdarg.h>
 /**
 * struct flag_input_s - holds flags passed to the flag_input_s
 * @flag_hash: holds hash flag_hash
 * @flag_plus: holds plus flag
 * @flag_space: holds space flag
 *
 */
typedef struct flag_input_s {
  int flag_hash;
  int flag_plus;
  int flag_space;
} flag_input_t;
/**
 * struct printf_fmt - holds format string and function
 * @fmt_s: character string holding the format
 * @fun_f: holds format functions
 *
 * Description: datastructure for printf
 */

typedef struct printf_fmt {
  char *fmt_s;
  int (*fun_f)(va_list, flag_input_t *);
} printf_fmt_t;


int _putchar(const char);
int _printf(const char *, ...);
int print_char(va_list, flag_input_t *);
int print_string(va_list, flag_input_t);
int (*get_fmt_fun(const char * const fmt)) (va_list, flag_input_t *);
int write_string(const char * const, const unsigned int);
int _string_len(const char * const s);
int printf_int(va_list, flag_input_t *);
int printf_dec(va_list, flag_input_t *);
int get_digits(unsigned int, unsigned int);
int print_bin(va_list, flag_input_t *);
char hex_digit(int v);
int  print_addr(va_list, flag_input_t *);
char *convert(unsigned int, int, int);
int  print_u(va_list, flag_input_t *);
int print_x(va_list, flag_input_t *);
int print_X(va_list, flag_input_t *);
int print_o(va_list, flag_input_t *);


# endif
