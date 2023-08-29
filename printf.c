#include "main.h"

#include "main.h"
int _printf(const char *format, ...);

/**
 * _printf - a function that produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
                                                      int count = 0;
    char c;

	while ((c = *format++) != '\0')
{
        if (c == '%')
	{
            c = *format++;
            if (c == '\0')
                break;
            if (c == 'c')
	    {
                char ch = (char)va_arg(args, int);
                putchar(ch);
                count++;
            }
	    else if (c == 's')
	    {
	const char *str = va_arg(args, const char *);
                while (*str)
		{
                    putchar(*str++);
                    count++;
                }
            }
	    else if (c == '%')
	    {
                putchar('%');
                count++;
            }
        }
       	else
	{
            putchar(c);
            count++;
        }
    }
{
    va_end(args);
    return (count);
}
}
