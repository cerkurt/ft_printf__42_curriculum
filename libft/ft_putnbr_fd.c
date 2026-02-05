/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:11:55 by Ceren Kurt        #+#    #+#             */
/*   Updated: 2025/10/22 21:51:33 by Ceren Kurt       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
// #include <fcntl.h>
// #include <stdio.h>

static void	print_digit(int n, int fd)
{
	char	*decimal;

	decimal = "0123456789";
	if (n > 9)
	{
		print_digit(n / 10, fd);
	}
	write(fd, &decimal[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		print_digit(n, fd);
	}
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
// 	ft_putnbr_fd(54093, fd);
// 	close (fd);
// 	return (0);
// }