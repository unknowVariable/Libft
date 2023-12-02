/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:07:38 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/11 22:12:54 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || (fd < 0))
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("Hello World !", 1);
	ft_putendl_fd("Hello World !", 1);
	ft_putendl_fd("Hello World !", 1);
	ft_putendl_fd("Hello World !", 1);
	ft_putendl_fd("Hello World !", 1);
	return (0);
}
*/