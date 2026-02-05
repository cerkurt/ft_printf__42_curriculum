/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:54:38 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:06:14 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
// 	t_list *head = NULL;
//     t_list *node1 = ft_lstnew(ft_strdup("first"));
//     t_list *node2 = ft_lstnew(ft_strdup("second"));
//     t_list *node3 = ft_lstnew(ft_strdup("third"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s / ", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_lstnew_bonus.c
// ft_lstlast_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c
// ft_strdup.c ft_strlen.c && ./a.out