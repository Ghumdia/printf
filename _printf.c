#include "main.h"

/**
 * _printf - prints anything
 * @format: format of string
 *
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;

	while(format[i])
	{
		_putchar(format[i]);
		printed++;
		i++;
	}
}

int main(void)
{
	_printf("hello world");
}
