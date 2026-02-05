/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:09:44 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:47:44 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
// #include <stdio.h>
// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	int fd;
// 	char str[] = "write this string into the test text file";

// 	fd = open ("testfile.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	// write only
// 	// create if doesnt exist
// 	// overwrite if exists
// 	// read & edit permissions
// 	if (fd == -1)
// 	{
// 		printf("File error!");
// 		return (1);
// 	}
// 	ft_putendl_fd(str, fd);
// 	close (fd);
// 	return (0);
// }