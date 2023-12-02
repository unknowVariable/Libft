/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:40:36 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 12:53:44 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('z'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('Z'));
	printf("%d", ft_isalnum('X'));
	printf("%d", ft_isalnum('8'));
	printf("%d", ft_isalnum('1'));
	printf("%d", ft_isalnum('#'));
	printf("%d", ft_isalnum('?'));
	printf("%d", ft_isalnum('/'));
}
*/