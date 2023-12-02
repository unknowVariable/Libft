/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:07:31 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/08 01:31:16 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int	main(void) {
	// Test 1 : Copie basique
	char src1[] = "Test string.";
	char dest1[20];
	char dest1_official[20];
	ft_memcpy(dest1, src1, sizeof(src1)); // Utilisation de votre ft_memcpy
	memcpy(dest1_official, src1, sizeof(src1));
		// Utilisation de la memcpy officielle
	printf("Test 1 - %s\n", memcmp(dest1, dest1_official,
			sizeof(src1)) == 0 ? "Passed" : "Failed");

	// Test 2 : Copie avec chevauchement
		- devrait échouer car memcpy n'est pas conçue pour cela
	char overlap_buffer[] = "123456789";
	ft_memcpy(overlap_buffer+2, overlap_buffer, 5);
	printf("Test 2
		- Peut échouer en raison d'un comportement indéfini (chevauchement)\n");

	// Test 3 : Copie de zéro élément
	char src3[] = "Nothing changes";
	char dest3[20] = "Original";
	char dest3_official[20] = "Original";
	ft_memcpy(dest3, src3, 0); // Votre ft_memcpy
	memcpy(dest3_official, src3, 0); // memcpy officielle
	printf("Test 3 - %s\n", memcmp(dest3, dest3_official,
			sizeof(dest3)) == 0 ? "Passed" : "Failed");

	// Test 4 : Copie de données non textuelles
	unsigned char data[] = {0x00, 0xff, 0x55, 0xaa};
	unsigned char data_dest[4];
	unsigned char data_dest_official[4];
	ft_memcpy(data_dest, data, sizeof(data)); // Votre ft_memcpy
	memcpy(data_dest_official, data, sizeof(data)); // memcpy officielle
	printf("Test 4 - %s\n", memcmp(data_dest, data_dest_official,
			sizeof(data)) == 0 ? "Passed" : "Failed");

	return (0);
}
*/