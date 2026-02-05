/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:53:44 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/24 09:17:50 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*new_str;

	i = 0;
	s_len = 0;
	new_str = NULL;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	return (new_str);
}

// int main(void)
// {
// 	char str1[] = "Dance Macabre";
// 	char str2[] = "Dance Macabre";
// 	char *result1 = ft_substr(str1, 6, 12);
// 	char *result2 = ft_substr(str2, 6, 12);
//  	printf("Result of the ft_substr: %s\n", result1);
// 	printf("Result of the c_substr: %s\n", result2);
// 	free(result1);
// 	free(result2);
//     return (0);
// }