/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:28 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 15:16:22 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%zu", ft_strlen("abcdef"));
	printf("%zu", ft_strlen("abcdefe"));
	printf("%zu", ft_strlen("abcdefee"));
	printf("%zu", ft_strlen("abc"));
	printf("%zu", ft_strlen(""));
	return (0);
}
*/