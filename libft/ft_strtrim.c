/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:00:10 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/02/26 14:52:25 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			j;
	char			*str;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_check(s1[i], set))
		i++;
	if (s1[i] == '\0')
	{
		str = ft_substr(s1, i, 1);
		return (str);
	}
	while (s1[j -1] && ft_check(s1[j -1], set))
		j--;
	j = j - i;
	str = ft_substr(s1, i, j);
	return (str);
}
