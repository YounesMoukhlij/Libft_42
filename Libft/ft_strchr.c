/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:47:22 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/08 17:37:24 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*t;
	int		len;

	i = 0;
	t = (char *)s;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (t[i] == (char)c)
			return (&t[i]);
		i++;
	}
	return (0);
}
