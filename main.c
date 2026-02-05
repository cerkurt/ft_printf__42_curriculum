/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/24 16:00:19 by cerkurt       #+#    #+#                 */
/*   Updated: 2025/11/26 11:06:20 by cerkurt       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	result1;
	int result2;

	result1 = ft_printf("Char: %c | String valid: %s | String null: %s | Ptr valid: %p | Ptr zero: %p | Dec Pos: %d | Dec Neg: %d | Int Min: %i | Int Max: %i | Uns Dec Max: %u | Uns Dec Min: %u | Hex Low Pos: %x | Hex Up Pos: %X | Hex Low Neg: %x | Hex Up Neg: %X | Perc: %%\n",
		'C', "Hello!", (char *)NULL, (void *)&result1, (void *)0, 42, -42, INT_MIN, INT_MAX, UINT_MAX, 0, 255, 255, -42, -42);

	result2 = printf("Char: %c | String valid: %s | String null: %s | Ptr valid: %p | Ptr zero: %p | Dec Pos: %d | Dec Neg: %d | Int Min: %i | Int Max: %i | Uns Dec Max: %u | Uns Dec Min: %u | Hex Low Pos: %x | Hex Up Pos: %X | Hex Low Neg: %x | Hex Up Neg: %X | Perc: %%\n",
		'C', "Hello!", (char *)NULL, (void *)&result1, (void *)0, 42, -42, INT_MIN, INT_MAX, UINT_MAX, 0, 255, 255, -42, -42);
	
	ft_printf("ft_printf returned: %d\n", result1);
	printf("printf returned: %d\n", result2);

	printf("\n");

	int result3 = ft_printf(NULL);
	int result4 = printf(NULL);

	ft_printf("NULL ft_printf returned: %d\n", result3);
	printf("NULL printf returned: %d\n", result4);

	printf("\n");

	int result5 = ft_printf("");
	int result6 = printf("");

	ft_printf("Empty ft_printf returned: %d\n", result5);
	printf("Empty printf returned: %d\n", result6);

	return (0);
}
