/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:18:02 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:01:10 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	size_t	i_new;
	char	*new_str;

	i1 = 0;
	i2 = 0;
	i_new = 0;
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_str)
	{
		return (NULL);
	}
	while (s1[i1])
	{
		new_str[i_new++] = s1[i1++];
	}
	while (s2[i2])
	{
		new_str[i_new++] = s2[i2++];
	}
	new_str[i_new] = 0;
	return (new_str);
}

// int main(void)
// {
// 	char str1[] = "Let's see what ";
// 	char str2[] = "happens after Nightfall...";
// 	char *result = ft_strjoin(str1, str2);
// 	printf("Result of the ft_strjoin: %s\n", result);
// 	free (result);
// 	return (0);
// }