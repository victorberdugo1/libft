/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 00:25:12 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 00:35:12 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num_str;

	num_str = ft_itoa(n);
	if (num_str)
		write(fd, num_str, ft_strlen(num_str));
}
/*#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int fd;
    int number = 12345;

    fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (fd == -1) { perror("Error al abrir el archivo"); exit(1); }

    ft_putnbr_fd(number, fd);

    if (close(fd) == -1) { perror("Error al cerrar el archivo"); exit(1); }

    printf("Number %d has been written to output.txt\n", number);

    return 0;
}
*/
