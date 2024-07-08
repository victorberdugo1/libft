/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 00:25:12 by victor            #+#    #+#             */
/*   Updated: 2024/07/08 12:02:39 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd((int)(num / 10), fd);
	}
	ft_putchar_fd(num % 10 + '0', fd);
}
/*
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int fd;
    int number = -12345;

    fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (fd == -1)
	{
		perror("Error al abrir el archivo"); exit(1); 
	}
    ft_putnbr_fd(number, fd);
    if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo"); exit(1);
	}
    return (0);
}
*/
