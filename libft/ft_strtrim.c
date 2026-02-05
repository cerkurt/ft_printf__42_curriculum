/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:04:16 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:16:46 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

static int	ft_char_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*ft_new_string(char const *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i1;
	size_t	i2;
	size_t	slen;

	if (!s1 || !set)
		return (NULL);
	i1 = 0;
	slen = ft_strlen(s1);
	i2 = slen;
	if (slen == 0)
	{
		return (ft_strdup(""));
	}
	while (s1[i1] && ft_char_check(set, s1[i1]))
	{
		i1++;
	}
	while (i2 > i1 && ft_char_check(set, s1[i2 - 1]))
	{
		i2--;
	}
	return (ft_new_string(s1, i1, i2 - i1));
}

// int main(void)
// {
// 	char str1[] = "oooo Some letters to be trimmed  OOooOOoooo";
// 	char const *letter = "o";
// 	char *result = ft_strtrim(str1, letter);
// 	printf("Result of the ft_strtrim: %s", result);
// 	free (result);
// 	return (0);
// }