/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:35:28 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/22 20:58:38 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sr;
	size_t				i;
	size_t				i;
	unsigned char		*des;
	unsigned char		*sr;
	unsigned char		*des;
	unsigned char		*sr;

	if (src == dest)
		return (dest);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*des;
	unsigned char	*sr;
	size_t			i;

	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (des > sr)
	{
		i = n;
		while (i--)
			des[i] = sr[i];
	}
	else
	{
		while (i < n)
		{
			des[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	// Test 1 : Pas de chevauchement
	strcpy(buffer, "Hello World");
	printf("Test 1 - Avant ft_memmove: %s\n", buffer);
	ft_memmove(buffer + 6, buffer, 5);
	printf("Test 1 - Apres ft_memmove: %s\n", buffer); // Attendu: "HelloHello"
	// Test 2 : Chevauchement, dest > src
	strcpy(buffer, "OverlapTest");
	printf("\nTest 2 - Avant ft_memmove: %s\n", buffer);
	ft_memmove(buffer + 1, buffer, 9);
	printf("Test 2 - Apres ft_memmove: %s\n", buffer); // Attendu: "OOverlapTes"
	// Test 3 : Chevauchement, src > dest
	strcpy(buffer, "OverlapTest");
	printf("\nTest 3 - Avant ft_memmove: %s\n", buffer);
	ft_memmove(buffer, buffer + 1, 10);
	printf("Test 3 - Apres ft_memmove: %s\n", buffer); // Attendu: "verlapTestt"
	// Test 4 : Copie complète avec chevauchement
	strcpy(buffer, "Hello World!");
	printf("\nTest 4 - Avant ft_memmove: %s\n", buffer);
	ft_memmove(buffer + 2, buffer, strlen(buffer));
	printf("Test 4 - Apres ft_memmove: %s\n", buffer);
		// Attendu: "HeHello World!"
	return (0);
}
*/
