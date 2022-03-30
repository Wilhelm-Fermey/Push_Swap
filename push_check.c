/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:10:09 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 14:59:05 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_tab_max(int a, char *str)
{
	char	*tab;
	int		i;

	i = 0;
	tab = ft_itoa(a);
	while (str[i])
	{
		if (tab[i] == str[i])
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_check_same(int len, int *tab)
{
	int	i;
	int	y;

	i = 0;
	while (i < len)
	{
		y = i + 1;
		while (y < len)
		{
			if (tab[i] == tab[y])
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			i++;
		else
			return (1);
	}
	return (0);
}

int	*ft_check(int len, char **str)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(len);
	while (str[i +1])
	{
		tab[i] = ft_atoi(str[i +1]);
		if (ft_check_num(str[i +1]) || ft_check_tab_max(tab[i], str[i +1]))
		{
			write(2, "Error\n", 6);
			free(tab);
			return (NULL);
		}
		i++;
	}
	if (ft_check_same(len, tab))
	{
		write(2, "Error\n", 6);
		free(tab);
		return (NULL);
	}
	return (tab);
}

int	*ft_check2(int len, char **str)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(len);
	while (str[i])
	{
		tab[i] = ft_atoi(str[i]);
		if (ft_check_num(str[i]) || ft_check_tab_max(tab[i], str[i]))
		{
			write(2, "Error\n", 6);
			free(tab);
			return (NULL);
		}
		i++;
	}
	if (ft_check_same(len, tab))
	{
		write(2, "Error\n", 6);
		free(tab);
		return (NULL);
	}
	return (tab);
}
