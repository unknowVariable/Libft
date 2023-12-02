/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:14:11 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/12 23:49:43 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_copy_str(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	global_len;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	global_len = s1_len + s2_len + 1;
	new_str = (char *)malloc(global_len * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_copy_str(new_str, s1, s1_len);
	ft_copy_str(new_str + s1_len, s2, s2_len);
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	global_len;
	size_t	i;
	size_t	j;
	char	*new_str;
	char	*s1;
	char	*s2;
	char	*result;
	char	*long_s1;
	char	*long_s2;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	global_len = (s1_len + s2_len) + 1;
	new_str = (char *)malloc(global_len * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
} */
/*
int	main(void)
{
	s1 = "Hello ";
	s2 = "World !";
	// Test de base
	result = ft_strjoin(s1, s2);
	if (result) {
		printf("Base Test: %s\n", result);
		free(result);
	}
	// Chaînes vides
	result = ft_strjoin("", "");
	if (result) {
		printf("Empty Strings Test: %s\n", result);
		free(result);
	}
	// Test avec NULL
	result = ft_strjoin(NULL, s2);
		// Vous pouvez également tester avec s1 comme NULL,
		ou les deux comme NULL.
	if (result) {
		printf("NULL Test: %s\n", result);
		free(result);
	} else {
		printf("NULL Test: Passed\n");
	}
	// Longues chaînes
	long_s1 = "Ceci est une très longue chaîne de caractères pour tester ";
	long_s2 = "la fonction ft_strjoin avec des chaînes de grande longueur.";
	result = ft_strjoin(long_s1, long_s2);
	if (result) {
		printf("Long Strings Test: %s\n", result);
		free(result);
	}
	return (0);
}

*/