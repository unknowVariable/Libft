/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:07:09 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/13 07:25:09 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_upper(unsigned int i, char *c) {
	(void)i;
	if (c && *c >= 'a' && *c <= 'z') {
		*c = toupper(*c);
	}
}

void	print_char(unsigned int i, char *c) {
	if (c) {
		printf("Index %u: %c\n", i, *c);
	}
}

int	main(void) {
	char str1[] = "hello world";
	char str2[] = "test string";

	printf("Avant ft_striteri (to_upper): %s\n", str1);
	ft_striteri(str1, to_upper);
	printf("Après ft_striteri (to_upper): %s\n\n", str1);

	printf("Test ft_striteri (print_char) sur '%s':\n", str2);
	ft_striteri(str2, print_char);

	return (0);
}
*/