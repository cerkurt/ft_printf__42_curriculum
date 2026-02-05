/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:15:22 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:42:13 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (temp_dest > temp_src)
	{
		while (n--)
		{
			temp_dest[n] = temp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char str1[30] = "Overlapping test here";
// 	char str2[30] = "Overlapping test here";
// 	printf("Before memmove: %s\n", str1);
// 	ft_memmove(str1 + 5, str1, 10);
// 	printf("After ft_memmove : %s\n", str1);
// 	printf("Before memmove: %s\n", str2);
// 	ft_memmove(str2 + 5, str2, 10);
// 	printf("After c_memmove : %s\n", str2);
// 	return (0);
// }
