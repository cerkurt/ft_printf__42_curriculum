/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:52:50 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/24 10:10:56 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			mult;

	if (size && nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	mult = nmemb * size;
	ptr = malloc (mult);
	i = 0;
	if (!ptr)
	{
		return (NULL);
	}
	while (i < mult)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int main (void)
// {
// 	int *result1 = ft_calloc(12, 4);
// 	int *result2 = ft_calloc(0, 4);
// 	int *result3 = ft_calloc(12, 0);
// 	int *result4 = ft_calloc(SIZE_MAX, 4);
// 	int *result5 = ft_calloc(3, SIZE_MAX);
// 	int *result6 = ft_calloc(1024, 2048);
// 	printf("Result of ft_calloc: %p\n", result1);
// 	printf("Result of zero item ft_calloc: %p\n", result2);
// 	printf("Result of zero size ft_calloc: %p\n", result3);
// 	printf("Result of overflow guard 1 ft_calloc: %p\n", result4);
// 	printf("Result of overflow guard 2 ft_calloc: %p\n", result5);
// 	printf("Result of big number ft_calloc: %p", result6);
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	free(result4);
// 	free(result5);
// 	free(result6);
// 	return (0);
// }