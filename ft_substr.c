/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:41:40 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/22 21:11:27 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ptr = (char *)malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;
	char			*substr;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = start;
	j = 0;
	if ((start + len) > s_len)
		len = s_len - start;
	while (j < len && s[i])
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
} */
/*
// Fonction pour tester une sous-chaîne
void	test_substr(char const *s, unsigned int start, size_t len,
		char const *expected) {
	substr = ft_substr(s, start, len);
	if (substr == NULL && expected == NULL) {
		printf("Test réussi (NULL attendu et reçu)\n");
	} else if (substr != NULL && expected != NULL && strcmp(substr,
			expected) == 0) {
		printf("Test réussi (%s attendu et reçu)\n", expected);
	} else {
		printf("Test échoué (attendu: %s, reçu: %s)\n", expected,
			substr ? substr : "NULL");
	}
	free(substr);
}

int	main(void) {
	test_substr("Hello World", 0, 5, "Hello");
	test_substr("Example", 3, 4, "mple");
	test_substr("Short", 2, 10, "ort");
	test_substr("Test", 4, 5, "");
	test_substr("Small", 10, 3, "");
	test_substr("", 0, 5, "");
	test_substr("Ceci est un test avec des espaces    ", 17, 10, "avec des e");

	return (0);
}
*/
