/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/21 14:56:10 by cerkurt       #+#    #+#                 */
/*   Updated: 2025/11/28 16:33:08 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf.h
 * @brief Header file for the custom ft_printf implementation.
 * 		This header declares all necessary functions and includes required
 * 		standard libraries for the ft_printf functionality.
 * @note libft folder is added because of the uncertainty
 * 		of the subject requirements.
 */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_putptr(void *ptr);
int		ft_printf(const char *str, ...);
int		ft_base_check(const char *base_str);
size_t	ft_putnbr_base_signed(long n, char *base_str);
size_t	ft_putnbr_base_unsigned(unsigned long n, char *base_str);
size_t	ft_print_arg_type(const char specifier, va_list *args);
size_t	ft_print_digit(size_t nb, const char *base_str, size_t base);

#endif