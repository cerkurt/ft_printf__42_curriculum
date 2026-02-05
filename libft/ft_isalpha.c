/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:49:22 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 20:56:56 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
// 	letter1 = '4';
// 	letter2 = 'T';
// 	printf("Result 1: %d", ft_isalpha(letter1));
// 	printf("\n");
// 	printf("Result 2: %d", ft_isalpha(letter2));
// 	return (0);
// }