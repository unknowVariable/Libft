/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:57:02 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/11 22:01:13 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || (fd < 0))
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	ft_putstr_fd("Hello World !", 1);
	return (0);
}
*/