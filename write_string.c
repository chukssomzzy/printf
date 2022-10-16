# include <unistd.h>
# include "_printf.h"

/**
 * write_string - write string to stdout
 * @s: pointer to string
 * @c: count of char to print to buffer
 *
 * Return: number of string written or 0
 */

int write_string(const char * const s, const unsigned int c)
{
	if (*s && c)
		return (write(stdout, s, c));
	return (0);
}
