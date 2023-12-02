/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:21:53 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/07 17:21:43 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * dest : Where to copy the string to
 * src  : Where to copy the string from
 * size : size of destination buffer
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	src_length = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}
/*
int	main(void) {
	// Test 1: Taille normale
	ret = ft_strlcpy(dest, src, sizeof(dest));
	// À décommenter si strlcpy est disponible pour comparer
	// ret_true = strlcpy(true_dest, src, sizeof(true_dest));
	printf("Test 1: \"%s\" (ft_strlcpy returned %zu)\n", dest, ret);
	// printf("True strlcpy: \"%s\" (strlcpy returned %zu)\n", true_dest,
		ret_true);
	// Test 2: Taille plus petite que la chaîne
	ret = ft_strlcpy(dest, src, 6); // Doit tronquer
	// ret_true = strlcpy(true_dest, src, 6);
	printf("Test 2: \"%s\" (ft_strlcpy returned %zu)\n", dest, ret);
	// printf("True strlcpy: \"%s\" (strlcpy returned %zu)\n", true_dest,
		ret_true);
	// Test 3: Taille 0 (ne doit rien copier)
	memset(dest, 'X', sizeof(dest));
	dest[sizeof(dest) - 1] = '\0';
		// Assurez-vous que la chaîne est terminée par '\0'.
	ret = ft_strlcpy(dest, src, 0);
	printf("Test 3: \"%s\" (ft_strlcpy returned %zu)\n", dest, ret);
	// Test 4: Source est NULL
	ret = ft_strlcpy(dest, NULL, sizeof(dest));
	// ret_true = strlcpy(true_dest, NULL, sizeof(true_dest));
		// Ceci peut provoquer un segfault
	printf("Test 4: (ft_strlcpy returned %zu)\n", ret);
	// printf("True strlcpy: (strlcpy returned %zu)\n", ret_true);
	// Test 5: Destination est NULL
	ret = ft_strlcpy(NULL, src, sizeof(dest));
	// ret_true = strlcpy(NULL, src, sizeof(true_dest));
		// Ceci peut provoquer un segfault
	printf("Test 5: (ft_strlcpy returned %zu)\n", ret);
	// printf("True strlcpy: (strlcpy returned %zu)\n", ret_true);
	return (0);
}
*/
