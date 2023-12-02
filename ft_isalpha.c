/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:37:29 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 15:24:29 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha('r'));
	printf("%d", ft_isalpha('x'));
	printf("%d", ft_isalpha('4'));
	printf("%d", ft_isalpha('*'));
	printf("\n \n \n");
	printf("%d", isalpha('a'));
	printf("%d", isalpha('z'));
	printf("%d", isalpha('A'));
	printf("%d", isalpha('Z'));
	printf("%d", isalpha('r'));
	printf("%d", isalpha('x'));
	printf("%d", isalpha('4'));
	printf("%d", isalpha('*'));
	return (0);
}
*/
