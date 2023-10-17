#include "main.h"
/**
 * _printf - print anything
 * @format: format the string
 * Return: number of bytes print
 */
int _printf(const char *format, ...);
{
	int num = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;

	return (count);

}
