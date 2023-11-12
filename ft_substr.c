/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:28 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/08 18:33:24 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
		return (ft_strdup(""));
	l = ft_strlen(s) - start;
	if (l > len)
		l = len;
	r = (char *)malloc(sizeof(char) * (l + 1));
	if (!r)
		return (NULL);
	while (s[start] && l)
	{
		r[i] = s[start];
		start++;
		i++;
		l--;
	}
	r[i] = '\0';
	return (r);
}
