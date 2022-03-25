/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:05:57 by wfermey           #+#    #+#             */
/*   Updated: 2022/02/28 09:15:09 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_atoi_atoi(char *str, int minus)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (((unsigned char)str[i] >= '0') && ((unsigned char)str[i] <= '9'))
	{
		if ((((result * 10) + (str[i] - 48)) < result) && (minus == 1))
			return (-1);
		else if ((((result * 10) + (str[i] - 48)) < result) && (minus == -1))
			return (0);
		result = (result * 10) + ((unsigned char)str[i] - 48);
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	char	*s;
	int		sign;

	i = 0;
	s = (char *)str;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = ft_atoi_atoi(&s[i], sign);
	result = result * sign;
	return ((int)result);
}
