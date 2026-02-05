/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:53:41 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:58:38 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// static void	test_to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 32;
// 	}
// }

// static void	test_to_lower(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'A' && *c <= 'Z')
// 	{
// 		*c = *c + 32;
// 	}
// }

// int main(void)
// {
// 	char str1[42] = "i am a string to be uppered";
// 	char str2[42] = "I AM A STRING TO BE LOWERED";
// 	ft_striteri(str1, test_to_upper);
// 	ft_striteri(str2, test_to_lower);
// 	printf("Result of the ft_striteri: %s\n", str1);
// 	printf("Result of the ft_striteri: %s", str2);
// 	return (0);
// }