#include "main.h"

/**
 * _print_char - prints character
 * @args: list of arguments
 *
 * Return: 1
 */

int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
