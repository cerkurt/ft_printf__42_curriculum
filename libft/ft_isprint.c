/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:41:32 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:01:12 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
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
// 	char1 = 42;
// 	char2 = 21;
// 	printf("Result 1: %d", ft_isprint(char1));
// 	printf("\n");
// 	printf("Result 2: %d", ft_isprint(char2));
// 	return (0);
// }