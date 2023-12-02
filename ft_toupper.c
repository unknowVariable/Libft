/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:59:12 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 19:09:59 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_toupper('a'));
	printf("%c", ft_toupper('z'));
	printf("%c", ft_toupper('b'));
	printf("%c", ft_toupper('t'));
	printf("%c", ft_toupper('A'));
	printf("%c", ft_toupper('B'));
	printf("%c", ft_toupper('\t'));
	printf("%c", ft_toupper('*'));
	return (0);
}
*/