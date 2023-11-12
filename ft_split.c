/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:26:21 by youmoukh          #+#    #+#             */
/*   Updated: 2023/11/11 12:22:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_word(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static	char	*ft_create(const char *s, char c)
{
	char	*r;
	int		len;
	int		i;

	len = ft_strlen_word(s, c);
	i = 0;
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	while (i < len)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**r;

	i = 0;
	if (s == NULL)
		return (NULL);
	r = (char **)malloc(sizeof(char *) * ((count_words(s, c) + 1)));
	if (!r)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			r[i] = ft_create(s, c);
			if (!r[i])
				return (ft_free(r));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	r[i] = 0;
	return (r);
}
