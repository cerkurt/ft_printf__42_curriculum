/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:03:53 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/28 17:56:03 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*occ;

	occ = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			occ = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (occ);
}

// int main(void)
// {
// 	char str1[] = "Who knows what will the result be?";
// 	char str2[] = "Who knows what will the result be?";
// 	int i = 'w';
// 	char *result1 = ft_strrchr(str1, i);
// 	char *result2 = strrchr(str2, i);
// 	printf("Result of the ft_strrchr: %s\n", result1);
// 	printf("Result of the c_strrchr: %s", result2);
// 	return (0);
// }