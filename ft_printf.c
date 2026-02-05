/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/21 20:03:50 by ceren         #+#    #+#                 */
/*   Updated: 2025/11/26 14:08:30 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @name ft_print_arg_type
 * @brief Determines the type of argument based on the format specifier
 *               and calls the appropriate function to handle printing that
 *               argument. Supports various specifiers including %c, %s, %p,
 *               %d, %i, %u, %x, %X, and %%.
 * @param specifier The format specifier character.
 * @param args The va_list containing the arguments.
 * @return The number of characters printed for the given argument.
 */
size_t	ft_print_arg_type(const char specifier, va_list *args)
{
	if (specifier == '%')
		return (ft_putchar('%'));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr_base_signed
			(va_arg(*args, int), "0123456789"));
	else if (specifier == 'u')
		return (ft_putnbr_base_unsigned
			(va_arg(*args, unsigned int), "0123456789"));
	else if (specifier == 'x')
		return (ft_putnbr_base_unsigned
			(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_putnbr_base_unsigned
			(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	return (0);
}

/**
 * @name ft_printf
 * @brief A custom implementation of the printf function that handles
 *               various format specifiers including %c, %s, %p, %d, %i, %u,
 *               %x, %X, and %%. It processes the format string and prints the
 *               corresponding arguments to the standard output.
 * @param str The format string containing text and format specifiers.
 * @return The total number of characters printed.
 */
int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t		counter;
	const char	*specifier;

	specifier = "cspdiuxX%";
	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);
	va_start(args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) && ft_strrchr(specifier, *(str + 1)))
		{
			counter += ft_print_arg_type(*(str + 1), &args);
			++str;
		}
		else
			counter += ft_putchar(*str);
		++str;
	}
	va_end(args);
	return (counter);
}
