#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * @flg: flags
 * Return: number of characters printed
 */
int printf_int(va_list args, flag_input_t *flg)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}  else if (last >= 0 && (*flg).flag_plus)
		_putchar('+'), i++;
	else if (last >= 0 && !(*flg).flag_plus && (*flg).flag_space)
		_putchar(' '), i++;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 * @args: argument to pointer
 * @flg: flags
 * Return: number of characters printed
 */

int printf_dec(va_list args, flag_input_t *flg)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	} else if (last >= 0 && (*flg).flag_plus)
		_putchar('+'), i++;
	else if (last >= 0 && !(*flg).flag_plus && (*flg).flag_space)
		_putchar(' '), i++;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
