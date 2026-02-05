/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:09:41 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/24 09:16:23 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str_1[i] != str_2[i])
		{
			return (str_1[i] - str_2[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str1[] = "I wonder how";
// 	char str2[] = "I wonder why";
// 	printf("Result of the ft_memcmp: %d\n", ft_memcmp(str1, str2, 14));
// 	printf("Result of the c_memcmp: %d\n", memcmp(str1, str2, 14));
// 	return (0);
// }