/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:57:07 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 15:03:06 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isascii('a'));
	printf("%d", ft_isascii('z'));
	printf("%d", ft_isascii('h'));
	printf("%d", ft_isascii('A'));
	printf("%d", ft_isascii('Z'));
	printf("%d", ft_isascii('H'));
	printf("%d", ft_isascii('0'));
	printf("%d", ft_isascii('9'));
	printf("%d", ft_isascii('6'));
	printf("%d", ft_isascii('*'));
	printf("%d", ft_isascii('%'));
	printf("%d", ft_isascii(')'));
	printf("%d", ft_isascii('\n'));
	printf("%d", ft_isascii('\t'));
	printf("%d", ft_isascii('+'));
	return (0);
}
*/