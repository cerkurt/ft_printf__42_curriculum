/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:14:23 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 20:58:36 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 	int dig1;
// 	int dig2;
// 	dig1 = 42;
// 	dig2 = 50;
// 	printf("Result 1: %d", ft_isdigit(dig1));
// 	printf("\n");
// 	printf("Result 2: %d", ft_isdigit(dig2));
// 	return (0);
// }