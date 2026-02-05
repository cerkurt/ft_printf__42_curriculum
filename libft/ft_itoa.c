/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:29 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/24 09:15:43 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_dig_sign_check(long *val, int *neg)
{
	int				dig;
	unsigned long	tmp_val;

	*neg = (*val < 0);
	if (*neg)
	{
		*val = -*val;
	}
	tmp_val = (unsigned long)*val;
	if (tmp_val == 0)
	{
		return (1);
	}
	dig = 0;
	while (tmp_val > 0)
	{
		tmp_val = tmp_val / 10;
		dig++;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		neg_nb;
	int		digit;
	char	*res;

	nb = n;
	digit = ft_dig_sign_check(&nb, &neg_nb);
	res = ft_calloc(digit + neg_nb + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (digit > 0)
	{
		res[digit - 1 + neg_nb] = (nb % 10) + '0';
		nb = nb / 10;
		digit--;
	}
	if (neg_nb)
	{
		res[0] = '-';
	}
	return (res);
}

// int main(void)
// {
// 	char *result1 = ft_itoa(-531);
// 	char *result2 = ft_itoa(2147483647);
// 	char *result3 = ft_itoa(-2147483648);
// 	char *result4 = ft_itoa(0);
// 	printf("Result of the ft_itoa: %s\n", result1);
// 	printf("Result of the ft_itoa sizemax: %s\n", result2);
// 	printf("Result of the ft_itoa sizemin: %s\n", result3);
// 	printf("Result of the ft_itoa zero: %s\n", result4);
// 	free (result1);
// 	free (result2);
// 	free (result3);
// 	free (result4);
// 	return (0);
// }