/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:21:36 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:43:40 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}

// int main(void)
// {
// 	char str1[] = "Set me to zero";
// 	char str2[] = "Set me to zero";
// 	char *result1 = ft_memset(str1, '0' , 3);
// 	char *result2 = memset(str2, 48 , 3);
// 	printf("Result of ft_memset: %s\n", result1);
// 	printf("Result of c_memset: %s", result2);
// 	return (0);
// }