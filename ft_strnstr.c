/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:51:15 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/07 18:29:15 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * big    : est la chaine ou est effectuer la recherche
 * little : est la chaine rechercher
 * len		: dans les "len" premiers caracteres de big
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (NULL);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((i + j) < len && big[i + j] == little[j])
			{
				j++;
				if (!little[j])
				{
					return ((char *)&big[i]);
				}
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void) {
	const char *haystack = "This is a simple string for testing";
	const char *empty = "";
	const char *needle1 = "simple";
	const char *needle2 = "nothing";
	const char *needle3 = "testing";
	size_t len = strlen(haystack);

	// Test 1: Recherche réussie
	assert(ft_strnstr(haystack, needle1, len) == strstr(haystack, needle1));
	printf("Test 1 réussi: '%s' trouvé dans '%s'\n", needle1, haystack);

	// Test 2: Recherche échouée
	assert(ft_strnstr(haystack, needle2, len) == strstr(haystack, needle2));
	printf("Test 2 réussi: '%s' absent de '%s'\n", needle2, haystack);

	// Test 3: Recherche limitée coupant le mot
	char *result3 = ft_strnstr(haystack, needle3, 20);
	// Strstr non utilisable, comportement différent avec limite.
	assert(result3 == NULL);
	printf("Test 3 réussi: Recherche de '%s' stoppée par limite\n", needle3);

	// Test 4: Recherche d'une chaîne vide
	assert(ft_strnstr(haystack, empty, len) == haystack);
	printf("Test 4 réussi: Chaîne vide trouvée dans '%s'\n", haystack);

	// Test 5: Recherche avec longueur nulle
	assert(ft_strnstr(haystack, needle1, 0) == NULL);
	printf("Test 5 réussi: Recherche avec longueur nulle donne NULL\n");

	// Test 6: Recherche avec limite de longueur
	assert(ft_strnstr(haystack, needle3, len + 10) == strstr(haystack, needle3));
	printf("Test 6 réussi: Recherche au-delà de la longueur avec limite\n");

	printf("Tous les tests réussis!\n");

	return (0);
}
*/