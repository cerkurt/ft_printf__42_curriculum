/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:27:33 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 20:57:37 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	int char1;
// 	int char2;
// 	char1 = 212;
// 	char2 = 68;
// 	printf("Result 1: %d", ft_isascii(char1));
// 	printf("\n");
// 	printf("Result 2: %d", ft_isascii(char2));
// 	return (0);
// }