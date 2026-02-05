/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:12:09 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:56:38 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc (ft_strlen(s) + 1);
	if (!dup)
	{
		return (NULL);
	}
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main(void)
// {
// 	char str1[] = "Hello, it's me.";
// 	char str2[] = "Hello, it's me.";
// 	char *result1 = ft_strdup(str1);
// 	char *result2 = ft_strdup(str2);
// 	if (result1 == NULL)
// 	{
// 		printf("Allocation error on ft_strdup, duplication is failed.");
// 		return (1);
// 	}
// 	else if (result2 == NULL)
// 	{
// 		printf("Allocation error on strdup, duplication is failed.");
// 		return (2);
// 	}
// 	else
// 	{
// 		printf("Result of ft_strdup: %s\n", result1);
// 		printf("Result of c_strdup: %s", result2);
// 	}
// 	free (result1);
// 	free (result2);
// 	return (0);
// }