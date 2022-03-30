/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:51:26 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 11:04:54 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_5_3(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_ra(list_a);
	ft_pb(list_a, list_b);
	ft_len4(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_5_4(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len4(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_5_5(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len4(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_len5(t_list **list_a, t_list **list_b)
{
	int	tmp;

	tmp = ft_list_min(list_a);
	if ((*list_a)->i == tmp)
	{
		ft_pb(list_a, list_b);
		ft_len4(list_a, list_b);
		ft_pa(list_a, list_b);
	}
	else if ((*list_a)->next->i == tmp)
	{
		ft_sa(list_a);
		ft_pb(list_a, list_b);
		ft_len4(list_a, list_b);
		ft_pa(list_a, list_b);
	}
	else if ((*list_a)->next->next->i == tmp)
		ft_5_3(list_a, list_b);
	else if ((*list_a)->next->next->next->i == tmp)
		ft_5_4(list_a, list_b);
	else if ((*list_a)->next->next->next->next->i == tmp)
		ft_5_5(list_a, list_b);
}
