/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/21 14:47:13 by Ceren Kurt    #+#    #+#                 */
/*   Updated: 2025/11/26 14:09:21 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @name ft_putchar
 * @brief Writes a single character to the standard output. This function
 *               is used to handle the %c specifier in ft_printf.
 * @param c The character to write.
 * @return The number of characters written (always 1).
 */
int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

// #include <stdio.h>

// int main(void)
// {
// 	int	count;

// 	count = ft_putchar('A');
// 	printf("\nNumber of characters printed: %d\n", count);
// 	return (0);
// }