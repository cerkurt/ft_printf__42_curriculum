/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:47:05 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 20:55:36 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// int main (void)
// {
// 	char str1[] = "You'll soon be hearing the chime, close to midnight";
// 	char str2[] = "You'll soon be hearing the chime, close to midnight";
// 	ft_bzero(str1, 21);
// 	bzero(str2, 21);
// 	printf("Result of ft_bzero: %s\n", str1 + 21);
// 	printf("Result of c_bzero: %s", str2 + 21);
// 	return (0);
// }