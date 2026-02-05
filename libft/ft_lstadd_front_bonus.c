/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:40:50 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:11:19 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("first"));
// 	t_list *node2 = ft_lstnew(ft_strdup("second"));
// 	t_list *node3 = ft_lstnew(ft_strdup("third"));

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);

// 	printf("Regular print of the contents\n");
//     printf("%s\n", (char *)node1->content);
// 	printf("%s\n", (char *)node2->content);
//     printf("%s\n\n", (char *)node3->content);

// 	printf("Content prints linked to the head\n");
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
//     	printf("%s\n", (char *)tmp->content);
//     	tmp = tmp->next;
// 	}
//     ft_lstclear(&head, free);
//     return (0);
// }

// cc -Wall -Wextra -Werror ft_lstnew_bonus.c ft_lstclear_bonus.c
// ft_lstadd_front_bonus.c ft_strdup.c ft_strlen.c ft_lstdelone_bonus.c