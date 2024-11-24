/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:38:45 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/11 11:58:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (check_set(*s1, set) == 1)
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len)
	{
		if (check_set(s1[len - 1], set) == 1)
			len--;
		else
			break ;
	}
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (0);
	ft_strlcpy(r, s1, len + 1);
	return (r);
}
