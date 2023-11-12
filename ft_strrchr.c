/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:51:34 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/08 17:41:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*r;

	r = (char *)s;
	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (r[len] == (char)c)
			return (&r[len]);
		len--;
	}
	return (0);
}
