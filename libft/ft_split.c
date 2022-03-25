/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:23:01 by wfermey           #+#    #+#             */
/*   Updated: 2022/02/28 10:28:40 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lentab(const char *str, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && count == 0)
		{
			count = 1;
			j++;
		}
		else if (str[i] == c)
			count = 0;
		i++;
	}
	return (j);
}

static char	*ft_str(const char *s, int start, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((len - start + 1) * sizeof(char));
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**str;

	str = malloc((ft_lentab(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			str[j] = ft_str(s, start, i);
			j++;
			start = -1;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
