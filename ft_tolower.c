/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:11:14 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 19:13:32 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_tolower('a'));
	printf("%c", ft_tolower('z'));
	printf("%c", ft_tolower('b'));
	printf("%c", ft_tolower('t'));
	printf("%c", ft_tolower('A'));
	printf("%c", ft_tolower('B'));
	printf("%c", ft_tolower('\t'));
	printf("%c", ft_tolower('*'));
	return (0);
}

*/