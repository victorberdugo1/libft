/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:35:38 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 00:20:00 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int fd;

    fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        exit(1);
    }

    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('\n', fd);

    if (close(fd) == -1)
    {
        perror("Error al cerrar el archivo");
        exit(1);
    }
    return 0;
}*/
