/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:54:43 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 00:19:01 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int fd;
    char *message = "Hello, world!\n";
    
    fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (fd == -1)
	{
		perror("Error al abrir el archivo"); 
		exit(1);
	}
    ft_putstr_fd(message, fd);
    if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo"); 
		exit(1);
	}
    return 0;
}
*/
