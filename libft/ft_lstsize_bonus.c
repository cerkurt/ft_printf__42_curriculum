/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:44:39 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:32:33 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew("one");
//     t_list *node2 = ft_lstnew("two");
//     t_list *node3 = ft_lstnew("three");
//     node1->next = node2;
//     node2->next = node3;
//     printf("List size: %d\n", ft_lstsize(node1));
// 	printf("List size: %d\n", ft_lstsize(node2));
// 	printf("List size: %d\n", ft_lstsize(node3));
// 	free(node1);
// 	free(node2);
// 	free(node3);
//     return (0);
// }