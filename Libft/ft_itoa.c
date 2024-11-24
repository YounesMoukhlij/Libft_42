/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:26:38 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/07 14:05:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_numbers(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	long	k;

	k = n;
	len = count_numbers(n);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (0);
	r[len--] = '\0';
	if (n == 0)
		r[0] = '0';
	if (k < 0)
	{
		r[0] = '-';
		k *= -1;
	}
	while (k > 0)
	{
		r[len--] = k % 10 + 48;
		k /= 10; 
	}
	return (r);
}
