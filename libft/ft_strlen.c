/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:45:11 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 22:08:13 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char str[] = "Together as one";
// 	printf("Result of ft_strlen: %zu\n", ft_strlen(str));
// 	printf("Result of c_strlen: %zu", ft_strlen(str));
// 	return (0);
// }