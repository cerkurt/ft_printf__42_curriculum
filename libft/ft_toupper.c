/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:37:52 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:19:42 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main(void)
// {
//  	int l = 'k';
// 	printf("Result of the ft_toupper: %c\n", ft_toupper(l));
//  	printf("Result of the c_toupper: %c", toupper(l));
// 	return (0);
// }