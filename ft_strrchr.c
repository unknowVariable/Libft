/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:40 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 20:12:02 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i == 0)
	{
		return (c == '\0' ? (char *)s : NULL);
	}
	do
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	} while (i-- != 0);
	return (NULL);
}*/
/*
char	*ft_strrchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = ft_strlen(s);
	while (i != 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
} */
/*
int	main(void) {
	result = ft_strrchr(str, 'o');
	if (result)
		printf("Dernière occurrence de 'o': %s\n", result);
	else
		printf("Caractère 'o' non trouvé.\n");
	return (0);
}
*/
