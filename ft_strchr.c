/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:15:52 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 19:37:12 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	return (NULL);
}
/*
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*result1;
	char	*result2;

	i = 0;
	while (s[i] || c == '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i++;
	}
	return (NULL);
} */
/*
void	test_strchr(const char *str, int c)
{
	result1 = strchr(str, c);
	result2 = ft_strchr(str, c);
	printf("Testing for character '%c' in string \"%s\"\n", (char)c, str);
	printf("strchr:    %s\n", result1 ? result1 : "NULL");
	printf("ft_strchr: %s\n", result2 ? result2 : "NULL");
	if (result1 == result2) {
		printf("Result: SUCCESS\n");
	} else {
		printf("Result: FAILURE\n");
	}
	printf("\n");
}

int	main(void)
{
	test_strchr("HelloWorld", 'H');
	test_strchr("HelloWorld", 'd');
	test_strchr("HelloWorld", 'Z');
	test_strchr("HelloWorld", 'W');
	test_strchr("HelloWorld", '\0');
	test_strchr("Programming", 'P');
	test_strchr("ExampleText", 'E');
	test_strchr("", '\0');
	test_strchr("", 'A');
	return (0);
}
*/