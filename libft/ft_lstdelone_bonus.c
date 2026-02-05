/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:01:56 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/23 22:04:29 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

// void static	del_content(void *content)
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

// 	printf("Before deleting contents:\n");
// 	printf("node1: %s\n", (char *)node1->content);
// 	printf("node2: %s\n", (char *)node2->content);
// 	printf("node3: %s\n", (char *)node3->content);

// 	ft_lstdelone(node2, del_content);

// 	printf("After deleting the content of node2:\n");
// 	printf("node1: %s\n", (char *)node1->content);
// 	printf("node2: %s\n", (char *)node2->content);
// 	printf("node3: %s\n", (char *)node3->content);
// 	ft_lstdelone(node1, del_content);
// 	ft_lstdelone(node3, del_content);
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_lstdelone_bonus.c ft_strdup.c
// ft_lstnew_bonus.c ft_strlen.c && ./a.out