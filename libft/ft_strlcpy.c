/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:54:57 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:06:55 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i_srclen;

	i = 0;
	i_srclen = 0;
	while (src[i_srclen])
	{
		i_srclen++;
	}
	if (size != 0)
	{
		while (i + 1 < size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i_srclen);
}

// int main(void)
// {
// 	char str_dst1[42] = "destination string";
// 	char str_dst2[42] = "destination string";
// 	char str_src[] = "source string";
// 	int i = 21;
// 	printf("Result of ft_strlcpy: %zu\n", ft_strlcpy(str_dst1, str_src, i));
// 	printf("Result of c_strlcpy: %zu", strlcpy(str_dst2, str_src, i));
// 	return (0);
// }