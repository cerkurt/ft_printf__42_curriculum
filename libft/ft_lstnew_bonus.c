/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:32:19 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:26:11 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*l_elem;

	l_elem = malloc(sizeof(t_list));
	if (!l_elem)
	{
		return (NULL);
	}
	l_elem->content = content;
	l_elem->next = NULL;
	return (l_elem);
}

// int main(void)
// {
//     t_list *node = ft_lstnew(ft_strdup("hello am i a linked list?"));
//     printf("Content: %s\n", (char *)node->content);
//     printf("Next: %p\n", (void *)node->next);
//     free(node->content);
//     free(node);
//     return (0);
// }