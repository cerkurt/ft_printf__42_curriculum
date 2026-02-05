/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:01:21 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:15:40 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ihay;
	size_t	ined;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	ihay = 0;
	while (haystack[ihay] && ihay < len)
	{
		ined = 0;
		while ((ihay + ined) < len && haystack[ihay + ined]
			&& haystack[ihay + ined] == needle[ined])
		{
			ined++;
			if (needle[ined] == '\0')
			{
				return ((char *)&haystack[ihay]);
			}
		}
		ihay++;
	}
	return (NULL);
}

// int main(void)
// {
//     char str1[] = "any match?";
//     char str2[] = "at";
//     char *result1 = ft_strnstr(str1, str2, 8);
//     char *result2 = strnstr(str1, str2, 8);
//     printf ("Result of the ft_strnstr: %s\n", result1);
//     printf ("Result of the c_strnstr: %s", result2);
//     return (0);
// }