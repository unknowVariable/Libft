/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:15:46 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/07 23:10:59 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * s : Pointeur vers le bloc de memoire où effectuer la recherche
 * c : valeur rechercher,
	sous forme de int mais est traitée comme un unsigned char pour la comparaison
 * num : représente le nombre d'octets à analyser dans le bloc de mémoire
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void) {
	const char str[] = "Example string for memchr";
	int test_char = 'm';
	size_t len_to_check = 10;
	// Checking only first 10 characters

	// Test 1: Your memchr vs standard memchr
	const char *res1 = ft_memchr(str, test_char, len_to_check);
	const char *res2 = memchr(str, test_char, len_to_check);

	if (res1 == res2) {
		printf("Test 1 passed: '%c' found at same position.\n", test_char);
	} else {
		printf("Test 1 failed: Different results.\n");
	}

	// Test 2: Character not in first 'len_to_check' chars
	test_char = 'z'; // Not in string
	res1 = ft_memchr(str, test_char, len_to_check);
	res2 = memchr(str, test_char, len_to_check);

	if (res1 == res2) {
		printf("Test 2 passed: '%c' not found.\n", test_char);
	} else {
		printf("Test 2 failed: Different results.\n");
	}

	// Test 3: Full length
	len_to_check = strlen(str);
	test_char = 'g'; // At end of string
	res1 = ft_memchr(str, test_char, len_to_check);
	res2 = memchr(str, test_char, len_to_check);

	if (res1 == res2) {
		printf("Test 3 passed: '%c' found at end.\n", test_char);
	} else {
		printf("Test 3 failed: Different results.\n");
	}

	// Test 4: Non-ASCII value
	len_to_check = strlen(str);
	test_char = 0x80; // Outside ASCII range
	res1 = ft_memchr(str, test_char, len_to_check);
	res2 = memchr(str, test_char, len_to_check);

	if (res1 == res2) {
		printf("Test 4 passed: Non-ASCII value handled.\n");
	} else {
		printf("Test 4 failed: Different results.\n");
	}

	return (0);
}
*/