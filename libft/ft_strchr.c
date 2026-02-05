/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:51:33 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:55:39 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[] = "Find my char";
// 	char str2[] = "Find my char";
// 	int i = 'm';
// 	printf("Result of ft_strchr: %s\n", ft_strchr(str1, i));
// 	printf("Result of c_strchr: %s\n", ft_strchr(str2, i));
// 	return (0);
// }