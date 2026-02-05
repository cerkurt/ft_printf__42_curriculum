/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:04:33 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:47:47 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
// #include <stdio.h>
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// 	int fd;

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
// 	ft_putchar_fd('C', fd);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('2', fd);
// 	ft_putchar_fd('-', fd);
// 	close (fd);
// 	return (0);
// }