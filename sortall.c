/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:09:24 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 10:43:54 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_get_bits(int num)
{
	int	i;

	i = 31;
	while ((num>>i) != 1)
		i--;
	return (i);
}



void	sort_unite(t_list **list_a, t_list **list_b, int j, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((((*list_a)->index >> j) & 1) == 0)
			ft_pb(list_a, list_b);
		else
			ft_ra(list_a);
		i++;
	}
}

void	ft_sortall(t_list **list_a, t_list **list_b, int len)
{
	int	len_bit;
	int	j;

	indexlist(list_a);
	j = 0;
	len_bit = ft_get_bits(len -1);
	while (j <= len_bit)  // nombre d'unite de bits  (ex :3)
	{
		sort_unite(list_a, list_b, j, len);
		while (*list_b)
			ft_pa(list_a, list_b);
		j++;
	}
}
