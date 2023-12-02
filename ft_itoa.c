/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:19:13 by aconstan          #+#    #+#             */
/*   Updated: 2023/11/12 03:48:20 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	long	nbr;
	char	*result;

	len = get_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	while (len-- > i)
	{
		result[len] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	return (result);
}
/*

int	main(void)
{
	int		num1;
	char	*result1;
	int		num2;
	char	*result2;
	int		num3;
	char	*result3;
	char	*result4;

	num1 = 12345;
	result1 = ft_itoa(num1);
	printf("Result1: %s\n", result1);
	free(result1);
	num2 = -67890;
	result2 = ft_itoa(num2);
	printf("Result2: %s\n", result2);
	free(result2);
	num3 = 0;
	result3 = ft_itoa(num3);
	printf("Result3: %s\n", result3);
	free(result3);
	int num4 = -2147483647; 
	result4 = ft_itoa(num4);
	printf("Result4: %s\n", result4);
	free(result4);
	return (0);
} */
