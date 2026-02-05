/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:45:16 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:10:00 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;
	size_t			len;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	result = malloc((len + 1));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// static char	char_swap(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c + 5;
// 	}
// 	else if (c >= 'A' && c <= 'Z')
// 	{
// 		c = c - 5;
// 	}
// 	else
// 	{
// 		c = c - 1;
// 	}
// 	return (c);
// }

// int main(void)
// {
// 	char str1[] = "let's test my string first";
// 	char str2[] = "THEN LET'S TEST THIS ONE";
// 	char *result1 = ft_strmapi(str1, char_swap);
// 	char *result2 = ft_strmapi(str2, char_swap);
// 	printf("Result of the ft_strmapi: %s\n", result1);
// 	printf("Result of the ft_strmapi: %s", result2);
// 	free (result1);
// 	free (result2);
// 	return (0);
// }