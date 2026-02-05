/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:20:34 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 20:55:49 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main (void)
// {
// 	int letter1;
// 	int letter2;
// 	letter1 = '&';
// 	letter2 = 'K';
// 	printf("Result 1: %d", ft_isalnum(letter1));
// 	printf("\n");
// 	printf("Result 2: %d", ft_isalnum(letter2));
// 	return (0);
// }