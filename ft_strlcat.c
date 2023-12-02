/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:57:36 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/06 18:37:15 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dst && !size)
		return (0);
	i = 0;
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}

/*
void	test_function(char *dst1, const char *src, size_t size, char *dst2) {
	size_t ret1, ret2;

	ret1 = ft_strlcat(dst1, src, size);
	ret2 = strlcat(dst2, src, size);

	assert(ret1 == ret2);
	assert(strcmp(dst1, dst2) == 0);
	printf("Passed for size %zu: %s\n", size, dst1);
}

int	main(void)
{
	char	test1a[50] = "Hello";
	char	test1b[50] = "Hello";
	char	test2a[10] = "Hello";
	char	test2b[10] = "Hello";
	char	test3a[50] = "Hello";
	char	test3b[50] = "Hello";

	test_function(test1a, " world!", sizeof(test1a), test1b);
	test_function(test2a, " world!", 9, test2b); // Doit copier partiellement
	test_function(test3a, " world!", 0, test3b); // Ne doit rien copier
}

*/