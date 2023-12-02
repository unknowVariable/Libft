/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:24:42 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 12:34:01 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('9'));
	printf("%d", ft_isdigit('4'));
	printf("%d", ft_isdigit('r'));
	printf("%d", ft_isdigit('a'));
	printf("%d", ft_isdigit('Z'));
	printf("%d", ft_isdigit(')'));
	printf("%d", ft_isdigit('+'));
	return (0);
}
*/