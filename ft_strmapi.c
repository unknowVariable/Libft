/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:43:03 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/13 08:32:31 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = (char *)malloc((s_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
char	to_upper(unsigned int i, char c) {
	(void)i;
	if (c >= 'a' && c <= 'z') {
		return (toupper(c));
	}
	return (c);
}

char	increment_char(unsigned int i, char c) {
	return (c + i);
}

int	main(void) {
	char const *str1 = "hello world";
	char *result;

	result = ft_strmapi(str1, to_upper);
	printf("Résultat to_upper: %s\n", result);
	free(result); // Libérer le résultat après utilisation

	result = ft_strmapi(str1, increment_char);
	printf("Résultat increment_char: %s\n", result);
	free(result); // Libérer le résultat après utilisation

	return (0);
}
*/
