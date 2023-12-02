/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:15:29 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/07 23:49:00 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void) {
	char *s1 = "Hello World";
	char *s2 = "Hello World";
	char *s3 = "Hello World!";
	char *s4 = "Hello there!";

	// Test 1: Comparaison de chaînes identiques.
	if (ft_memcmp(s1, s2, strlen(s1)) == memcmp(s1, s2, strlen(s1)))
		printf("Test 1 passed: Identical strings are equal.\n");
	else
		printf("Test 1 failed: Identical strings are not equal.\n");

	// Test 2: Comparaison avec une chaîne légèrement différente.
	if (ft_memcmp(s1, s3, strlen(s1)) == memcmp(s1, s3, strlen(s1)))
		printf("Test 2 passed: Difference caught between strings.\n");
	else
		printf("Test 2 failed: Difference not caught between strings.\n");

	// Test 3: Comparaison avec n plus petit que la différence.
	if (ft_memcmp(s1, s4, 5) == memcmp(s1, s4, 5))
		printf("Test 3 passed: No difference within first 5 characters.\n");
	else
		printf("Test 3 failed: Unexpected difference within first 5 characters.\n");

	// Test 4: Comparaison avec n au-delà de la fin de la chaîne.
	if (ft_memcmp(s1, s3, 20) == memcmp(s1, s3, 20))
		printf("Test 4 passed: Difference caught with n beyond string length.\n");
	else
		printf("Test 4 failed: Difference not caught with n beyond string length.\n");

	// Test 5: Comparaison de chaînes avec des octets nuls.
	char *s5 = "Hello\0World";
	char *s6 = "Hello\0World!";
	if (ft_memcmp(s5, s6, 11) == memcmp(s5, s6, 11))
		printf("Test 5 passed: Difference caught in strings with null bytes.\n");
	else
		printf("Test 5 failed: Difference not caught in strings with null bytes.\n");

	return (0);
}
*/
