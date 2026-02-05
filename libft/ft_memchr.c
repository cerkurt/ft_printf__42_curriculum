/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:20:50 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:32:51 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[] = "Itsy bitsy dipsy code";
// 	char str2[] = "Itsy bitsy dipsy code";
// 	char *result1 = ft_memchr(str1, 'd', 15);
// 	char *result2 = memchr(str2, 'd', 15);
// 	if (result1 && result2)
// 	{
// 		printf("Result of ft_memchr: %ld\n", result1 - str1);
// 		printf("Result of memchr: %ld", result2 - str2);
// 	}
// 	else
// 	{
// 		printf("Result not found");
// 	}
// 	return (0);
// }