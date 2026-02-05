/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:48:06 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:21:39 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
	{
		return (NULL);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	t_list *node2 = ft_lstnew(ft_strdup("two"));
// 	t_list *node3 = ft_lstnew(ft_strdup("three"));

// 	node1->next = node2;
// 	node2->next = node3;

// 	t_list *last = ft_lstlast(node1);
// 	printf("Last node content: %s\n", (char *)last->content);

// 	ft_lstclear(&node1, free);
// 	return (0);
// }