/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:49:06 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/22 21:26:23 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
int	main(void) {
	// Test 1: Taille standard
	char buffer1[10];
	char buffer2[10];

	memset(buffer1, 'A', sizeof(buffer1)); // Initialise avec 'A'
	memcpy(buffer2, buffer1, sizeof(buffer1));
	// Copie pour avoir le même état de départ

	bzero(buffer1, sizeof(buffer1)); // Fonction officielle
	ft_bzero(buffer2, sizeof(buffer2)); // Votre fonction

	// Comparaison des buffers
	if(memcmp(buffer1, buffer2, sizeof(buffer1)) != 0) {
		printf("Test 1 échoué: buffers différents.\n");
	} else {
		printf("Test 1 réussi: buffers identiques.\n");
	}

	// Test 2: Taille partielle
	memset(buffer1, 'B', sizeof(buffer1)); // Réinitialise avec 'B'
	memcpy(buffer2, buffer1, sizeof(buffer1));
	// Copie pour avoir le même état

	bzero(buffer1, 5); // Officielle sur la moitié du buffer
	ft_bzero(buffer2, 5); // Votre fonction sur la moitié

	if(memcmp(buffer1, buffer2, sizeof(buffer1)) != 0) {
		printf("Test 2 échoué: moitiés des buffers diff.\n");
	} else {
		printf("Test 2 réussi: moitiés des buffers ident.\n");
	}

	// Test 3: Taille nulle
	memset(buffer1, 'C', sizeof(buffer1)); // Réinitialise avec 'C'
	memcpy(buffer2, buffer1, sizeof(buffer1));
	// Copie pour avoir le même état

	bzero(buffer1, (0)); // Officielle avec taille 0, ne devrait rien faire
	ft_bzero(buffer2, (0)); // Votre fonction avec taille 0, idem

	if(memcmp(buffer1, buffer2, sizeof(buffer1)) != 0) {
		printf("Test 3 échoué: différence après bzero de taille 0.\n");
	} else {
		printf("Test 3 réussi: identiques après bzero de taille 0.\n");
	}

	return (0);
}
*/
