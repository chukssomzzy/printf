#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	_printf("Character:[%d]\n", 'H');
	printf("Character:[%d]\n", 'H');
	_printf("String:[%s] %% \n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%i %i\n", len, len2);

		return (0);
}
