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
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed += _print_char(args);
					i += 2;
					break;
				case 's':
					printed += _print_str(args);
					i += 2;
					break;
				case '%':
				{
					_putchar('%');
					printed++;
					i += 2;
					break;
				}
				default :
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}

		}
		if (format[i])
		{
			_putchar(format[i]);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}
