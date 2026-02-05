/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:14:07 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/29 14:15:20 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
		}
		if (*s)
		{
			count++;
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	return (count);
}

static char	*ft_word_allocate(const char *str, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (str[len] && str[len] != c)
	{
		len++;
	}
	word = (char *)ft_calloc(len + 1, sizeof(char));
	if (!word)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

static void	*ft_array_free(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[i] = ft_word_allocate(s, c);
			if (!res[i])
				return (ft_array_free(res, (size_t)i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}

// static void	tester_free_split(char **arr)
// {
// 	size_t i = 0;
// 	if (!arr)
// 		return ;
// 	while (arr[i])
// 	{
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }

// int	main(void)
// {
// 	char **result;
// 	int i;

// 	printf("Test with regular string:\n");
// 	result = ft_split("Try to split this string with spaces.", ' ');
// 	i = 0;
// 	while (result && result[i])
// 	{
// 		printf("--->%s\n", result[i]);
// 		i++;
// 	}
// 	tester_free_split(result);

// 	printf("\nTest with multiple delimiters:\n");
// 	result = ft_split("   Try   to   split thisstring with   spaces.  ", ' ');
// 	i = 0;
// 	while (result && result[i])
// 	{
// 		printf("--->%s\n", result[i++]);
// 	}
// 	tester_free_split(result);

// 	printf("\nTest with NULL split\n");
// 	result = ft_split(NULL, ' ');
// 	if (!result)
// 		printf("--->Returns NULL");
// 	return (0);
// }