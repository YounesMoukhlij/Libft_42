/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:23:35 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/11 11:20:01 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_flow(int i, char const *str, int sign)
{
	size_t	r;

	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r > 922337203685477580 
			|| (r == 922337203685477580 && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		r = r * 10;
		r += str[i] - '0';
		i++;
	}
	return (r * sign);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	r;

	i = 0;
	sign = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_check_flow(i, str, sign));
}
