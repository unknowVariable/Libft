/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:54 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 15:11:10 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isprint('a'));
	printf("%d", ft_isprint('z'));
	printf("%d", ft_isprint('h'));
	printf("%d", ft_isprint('A'));
	printf("%d", ft_isprint('Z'));
	printf("%d", ft_isprint('H'));
	printf("%d", ft_isprint('0'));
	printf("%d", ft_isprint('9'));
	printf("%d", ft_isprint('6'));
	printf("%d", ft_isprint('*'));
	printf("%d", ft_isprint('%'));
	printf("%d", ft_isprint(')'));
	printf("%d", ft_isprint('\n'));
	printf("%d", ft_isprint('\t'));
	printf("%d", ft_isprint('+'));
	printf("%d", ft_isprint('\a'));
	return (0);
}
*/