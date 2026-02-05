/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/21 14:48:36 by cerkurt       #+#    #+#                 */
/*   Updated: 2025/11/26 14:32:03 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @name ft_base_check
 * @brief Validates the base string for number conversion. Rejects bases
 *               that are invalid due to length, duplicate characters, or
 *               presence of '+' or '-' signs.
 * @param base_str The string representing the base.
 * @return The length of the base if valid, otherwise 0.
 */
int	ft_base_check(const char *base_str)
{
	int	i1;
	int	i2;

	if (!base_str || base_str[0] == '\0' || base_str[1] == '\0')
		return (0);
	i1 = 0;
	while (base_str[i1])
	{
		if (base_str[i1] == '+' || base_str[i1] == '-'
			|| base_str[i1] <= 32 || base_str[i1] > 126)
			return (0);
		i2 = i1 + 1;
		while (base_str[i2])
		{
			if (base_str[i2] == base_str[i1])
				return (0);
			i2++;
		}
		i1++;
	}
	return (i1);
}

/**
 * @name ft_print_digit
 * @brief Recursively prints a number in the specified base. This helper
 *               function is used by both signed and unsigned number printing
 *               functions. Handles the actual digit extraction and printing.
 * @param nb The number to print.
 * @param base_str The string representing the base.
 * @param base The lenght of the base (chars).
 * @return The number of characters printed.
 */
size_t	ft_print_digit(size_t nb, const char *base_str, size_t base)
{
	size_t	result;

	result = 0;
	if (nb >= base)
		result += ft_print_digit(nb / base, base_str, base);
	result += write(1, &base_str[nb % base], 1);
	return (result);
}

/**
 * @name ft_putnbr_base_signed
 * @brief Prints a signed integer in the specified base. Handles
 *               negative numbers by printing a '-' sign before the number.
 * @param n The signed integer to print. This function is used for
 * 			%d and %i specifiers.
 * @param base_str The string representing the base.
 * @return The number of characters printed.
 */
size_t	ft_putnbr_base_signed(long n, char *base_str)
{
	long	number;
	int		valid_base;
	size_t	result;

	number = n;
	valid_base = ft_base_check(base_str);
	result = 0;
	if (!valid_base)
		return (0);
	if (number < 0)
	{
		result += ft_putchar('-');
		number = -number;
	}
	result += ft_print_digit(number, base_str, valid_base);
	return (result);
}

/**
 * @name ft_putnbr_base_unsigned
 * @brief Prints an unsigned integer in the specified base. Handles only
 *               non-negative numbers. This function is used for
 * 				 %u, %x, and %X specifiers.
 * @param n The unsigned integer to print.
 * @param base_str The string representing the base.
 * @return The number of characters printed.
 */
size_t	ft_putnbr_base_unsigned(unsigned long n, char *base_str)
{
	int		valid_base;
	size_t	result;

	valid_base = ft_base_check(base_str);
	if (!valid_base)
		return (0);
	result = 0;
	result += ft_print_digit(n, base_str, valid_base);
	return (result);
}
