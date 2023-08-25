#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: this is a character string
 *
 * Return: the numbers of characters printed
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;

	int flags = 0;
	int width = 0;
	int precision = 0;
	int size = 0;
	int buff_ind = 0;

	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
		buffer[buff_ind++] = format[i];
		if (buff_ind == BUFF_SIZE)
		print_buffer(buffer, &buff_ind);
		printed_chars++;
		}
		else
		{
	print_buffer(buffer, &buff_ind);
	flags = get_flags(format, &i);
	width = get_width(format, &i, list);
	precision = get_precision(format, &i, list);
	size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}
