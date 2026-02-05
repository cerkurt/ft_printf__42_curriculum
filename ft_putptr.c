/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/24 13:28:02 by cerkurt       #+#    #+#                 */
/*   Updated: 2025/11/28 17:10:32 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @name: ft_putptr
 * @description: Prints a pointer address in hexadecimal format, prefixed with
 *               "0x". If the pointer is NULL, it prints "(nil)". This function
 *               handles pointer representation for the %p specifier in
 * 				 ft_printf.
 * @param ptr The pointer to print.
 * @return The number of characters printed.
 */
size_t	ft_putptr(void *ptr)
{
	size_t	result;

	result = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	result += ft_putstr("0x");
	result += ft_putnbr_base_unsigned((unsigned long)ptr, "0123456789abcdef");
	return (result);
}
