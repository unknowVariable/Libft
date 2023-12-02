/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:19:57 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 20:20:24 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char	tab[] = "Hermione";
	char	tab2[] = "HermioneF";
	char	tab3[] = "Hermione";
	char	tab4[] = "";

	printf("%d\n", ft_strncmp(tab, tab2, 9));
	printf("%d\n", ft_strncmp(tab2, tab, 9));
	printf("%d\n", ft_strncmp(tab, tab3, 8));
	printf("%d\n", ft_strncmp(tab4, tab4, 5));
	printf("%d\n", ft_strncmp(tab4, tab2, 5));
	printf("%d\n\n\n", ft_strncmp(tab2, tab4, 5));
	printf("%d\n", strncmp(tab, tab2, 9));
	printf("%d\n", strncmp(tab2, tab, 9));
	printf("%d\n", strncmp(tab, tab3, 8));
	printf("%d\n", strncmp(tab4, tab4, 5));
	printf("%d\n", strncmp(tab4, tab2, 5));
	printf("%d\n", strncmp(tab2, tab4, 5));
	return (0);
}

*/
