/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:43:57 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/11 19:57:37 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcopy(const char *src, char *dest)

{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)

{
	size_t	s_len;
	char	*s2;

	s_len = ft_strlen(s);
	s2 = (char *)malloc((s_len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strcopy(s, s2);
	return (s2);
}
/*
int	main(void)

{
	char test1[] = "Hello";
	char *test2 = ft_strdup(test1);
	printf("%s", test2);

	return (0);
}
*/