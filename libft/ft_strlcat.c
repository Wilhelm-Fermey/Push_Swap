/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:17:15 by wfermey           #+#    #+#             */
/*   Updated: 2022/02/28 09:44:53 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	str = (char *)src;
	i = 0;
	j = 0;
	len = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
		len++;
	}
	while (src[j])
		j++;
	len = len + j;
	j = 0;
	if (dstsize > i)
	{
		while (str[j] && i < dstsize - 1)
			dst[i++] = str[j++];
		dst[i] = '\0';
	}
	return (len);
}
