/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:45:44 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/13 03:58:23 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed_str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed_str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
/*
int	main(void) {
	char *result;

	// Test avec des caractères standard à trimmer
	result = ft_strtrim("###Hello World###", "#");
	printf("Test 1: %s\n", result);
	free(result);

	// Test avec une chaîne vide
	result = ft_strtrim("", "abc");
	printf("Test 2: %s\n", result);
	free(result);

	// Test avec des caractères de set non présents dans la chaîne
	result = ft_strtrim("Hello World", "x");
	printf("Test 3: %s\n", result);
	free(result);

	// Test avec des caractères de set présents seulement au début
	result = ft_strtrim("xxHello World", "x");
	printf("Test 4: %s\n", result);
	free(result);

	// Test avec des caractères de set présents seulement à la fin
	result = ft_strtrim("Hello Worldxx", "x");
	printf("Test 5: %s\n", result);
	free(result);

	// Test avec une chaîne où tous les caractères sont dans set
	result = ft_strtrim("aaaaa", "a");
	printf("Test 6: %s\n", result);
	free(result);

	// Test avec une chaîne nulle
	result = ft_strtrim(NULL, "abc");
	if (result) {
		printf("Test 7: %s\n", result);
		free(result);
	} else {
		printf("Test 7: NULL (comme attendu)\n");
	}

	// Test avec un set vide
	result = ft_strtrim("Hello World", "");
	printf("Test 8: %s\n", result);
	free(result);

	// Test avec une chaîne et un set nuls
	result = ft_strtrim(NULL, NULL);
	if (result) {
		printf("Test 9: %s\n", result);
		free(result);
	} else {
		printf("Test 9: NULL (comme attendu)\n");
	}

	return (0);
}

*/