/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:22 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/23 19:57:12 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i_dstlen;
	size_t	i_srclen;

	i = 0;
	i_dstlen = 0;
	i_srclen = 0;
	while (dst[i_dstlen] && i_dstlen < size)
		i_dstlen++;
	while (src[i_srclen])
		i_srclen++;
	if (i_dstlen == size)
	{
		return (size + i_srclen);
	}
	while ((i_dstlen + 1 + i) < size && src[i])
	{
		dst[i_dstlen + i] = src[i];
		i++;
	}
	dst[i_dstlen + i] = '\0';
	return (i_dstlen + i_srclen);
}

// int main(void)
// {
// 	char str_dest1[42] = "to the dest";
// 	char str_dest2[42] = "to the dest";
// 	char str_src[] = "Catenate the source";
// 	int i = 14;
// 	printf("Result of the ft_strlcat: %zu\n",
//  	ft_strlcat(str_dest1, str_src, i));
// 	printf("Result of the c_strlcat: %zu",
//  	strlcat(str_dest2, str_src, i));
// 	return (0);
// }