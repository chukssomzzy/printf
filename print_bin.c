# include "main.h"
# include <stdarg.h>
# include <stdlib.h>

/**
 * print_bin - print an unsigned number to binary
 * @ap: argument pointer variable point to next
 * @flg: flags
 * Return: number of char printed
 */


int print_bin(va_list ap, flag_input_t *flg)
{
	unsigned int i;
	int n, c;
	char *s;
	int ch;
	int cnt = 0;

	n = va_arg(ap, unsigned int);
	i = (get_digits(n, BASE2));
	c = i;
	s = malloc(sizeof(*s) * (i + 1));
	if (!s)
		return (0);
	*(s + i--) = '\0';
	do {
		ch = (n % BASE2) + '0';
		*(s + i--) = ch;
	} while ((n /= BASE2) > 0);
	if ((*flg).flag_hash)
	{
		cnt += _putchar('o');
		cnt += _putchar('b');
	}
	cnt += write_string(s, c);
	free(s);
	return (cnt);
}

/**
 * get_digits - returns number of digits in a number
 * @n: number to find number of digits
 * @b: base
 * Return: Number of digits in a number
 */
int get_digits(unsigned int n, unsigned int b)
{
	int i;

	i = 1;
	for (; (n / b) != 0; n /= b)
		i++;
	return (i);
}
