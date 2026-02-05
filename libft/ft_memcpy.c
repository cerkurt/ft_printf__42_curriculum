/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:45:46 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/23 22:05:06 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	if (!dest && !src)
	{
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str_dest1[] = "I am the destination.";
// 	char	str_src1[] = "I am the source";
// 	char	str_dest2[] = "I am the destination.";
// 	char	str_src2[] = "I am the source";
// 	char	*result1 = ft_memcpy(str_dest1, str_src1, ft_strlen(str_src1) + 1);
// 	char	*result2 = memcpy(str_dest2, str_src2, ft_strlen(str_src2) + 1);
// 	printf("Result dest of the ft_memcpy: %s\n", result1);
// 	printf("Result dest of the ft_memcpy: %s", result2);
// 	return (0);
// }