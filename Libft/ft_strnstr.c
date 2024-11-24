/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:59:59 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/11 14:15:00 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	j = 0;
	n = (char *)needle;
	h = (char *)haystack;
	if (!haystack && !len)
		return (0);
	if (needle[i] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j] && h[i + j] == n[j] && i + j < len)
			j++;
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (0);
}
