/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:04:46 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/13 07:06:38 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strings(char c, char const *str)
{
	size_t	i;
	size_t	nb_strings;

	i = 0;
	nb_strings = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			nb_strings++;
		i++;
	}
	return (nb_strings);
}

static char	*create_substring(char const *s, size_t start, size_t end)
{
	char	*substring;
	size_t	length;

	length = end - start;
	substring = (char *)malloc((length + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, length + 1);
	return (substring);
}

static char	*process_substring(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*substring;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] != c && s[end] != '\0')
		end++;
	substring = create_substring(s, *start, end);
	*start = end;
	return (substring);
}

static char	**allocate_and_fill(char const *s, char c, size_t nb_strings)
{
	char	**strings_array;
	size_t	index;
	size_t	start;

	index = 0;
	start = 0;
	strings_array = (char **)malloc((nb_strings + 1) * sizeof(char *));
	if (!strings_array)
		return (NULL);
	while (index < nb_strings)
	{
		strings_array[index] = process_substring(s, c, &start);
		if (!strings_array[index])
		{
			while (index > 0)
				free(strings_array[--index]);
			free(strings_array);
			return (NULL);
		}
		index++;
	}
	strings_array[nb_strings] = NULL;
	return (strings_array);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_strings;

	if (!s)
		return (NULL);
	nb_strings = count_strings(c, s);
	return (allocate_and_fill(s, c, nb_strings));
}
/*
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	**strings_array;
	size_t	nb_strings;
	size_t	string_index;

	if (!s)
		return (NULL);
	nb_strings = count_strings(c, s);
	strings_array = (char **)malloc((nb_strings + 1) * sizeof(char *));
	if (!strings_array)
		return (NULL);
	string_index = 0;
	i = 0;
	while (s[i] && string_index < nb_strings)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		strings_array[string_index] = (char *)malloc((end - start + 1)
				* sizeof(char));
		if (!strings_array[string_index])
		{
			while (string_index > 0)
			{
				string_index--;
				free(strings_array[string_index]);
			}
			free(strings_array);
			return (NULL);
		}
		strncpy(strings_array[string_index], &s[start], end - start);
		strings_array[string_index][end - start] = '\0';
		string_index++;
	}
	strings_array[nb_strings] = NULL;
	return (strings_array);
void	print_split(char **split)
{
	if (!split)
	{
		printf("NULL\n");
		return ;
	}
	for (int i = 0; split[i] != NULL; i++)
	{
		printf("'%s'\n", split[i]);
		free(split[i]); // Libérer chaque sous-chaîne
	}
	free(split); // Libérer le tableau de pointeurs
}

int	main(void)
{
	char **result;

	// Test Basique
	result = ft_split("Hello World", ' ');
	printf("Test Basique:\n");
	print_split(result);

	// Délimiteurs Consécutifs
	result = ft_split("Hello::World", ':');
	printf("\nDélimiteurs Consécutifs:\n");
	print_split(result);

	// Délimiteur au Début
	result = ft_split(",Hello World", ',');
	printf("\nDélimiteur au Début:\n");
	print_split(result);

	// Délimiteur à la Fin
	result = ft_split("Hello World,", ',');
	printf("\nDélimiteur à la Fin:\n");
	print_split(result);

	// Chaîne Vide
	result = ft_split("", ',');
	printf("\nChaîne Vide:\n");
	print_split(result);

	// Aucun Délimiteur
	result = ft_split("Hello World", 'x');
	printf("\nAucun Délimiteur:\n");
	print_split(result);

	// Chaîne NULL
	result = ft_split(NULL, ',');
	printf("\nChaîne NULL:\n");
	print_split(result);

	return (0);
}
} */