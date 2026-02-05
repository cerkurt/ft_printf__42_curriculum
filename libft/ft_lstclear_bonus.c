/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:05:43 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/11/21 14:44:32 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// static void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	t_list *node2 = ft_lstnew(ft_strdup("two"));
// 	t_list *node3 = ft_lstnew(ft_strdup("three"));

// 	node1->next = node2;
// 	node2->next = node3;

// 	printf("Before clearing node(s):\n");
// 	printf("node1: %s\n", (char *)node1->content);
// 	printf("node2: %s\n", (char *)node2->content);
// 	printf("node3: %s\n", (char *)node3->content);

// 	ft_lstclear(&node3, del_content);
// 	node2->next = NULL;
// 	printf("After clearing node3:\n");
// 	printf("node1: %s\n", (char *)node1->content);
// 	printf("node2: %s\n", (char *)node2->content);
// 	ft_lstclear(&node1, del_content);
// 	ft_lstclear(&node2, del_content);
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_lstdelone_bonus.c
// ft_lstnew_bonus.c ft_lstclear_bonus.c ft_strdup.c ft_strlen.c 