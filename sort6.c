/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:58:01 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 11:06:44 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_6_3(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_ra(list_a);
	ft_pb(list_a, list_b);
	ft_len5(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_6_4(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_ra(list_a);
	ft_ra(list_a);
	ft_pb(list_a, list_b);
	ft_len5(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_6_5(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len5(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_6_6(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len5(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_len6(t_list **list_a, t_list **list_b)
{
	int	tmp;

	tmp = ft_list_min(list_a);
	if ((*list_a)->i == tmp)
	{
		ft_pb(list_a, list_b);
		ft_len5(list_a, list_b);
		ft_pa(list_a, list_b);
	}
	else if ((*list_a)->next->i == tmp)
	{
		ft_sa(list_a);
		ft_pb(list_a, list_b);
		ft_len5(list_a, list_b);
		ft_pa(list_a, list_b);
	}
	else if ((*list_a)->next->next->i == tmp)
		ft_6_3(list_a, list_b);
	else if ((*list_a)->next->next->next->i == tmp)
		ft_6_4(list_a, list_b);
	else if ((*list_a)->next->next->next->next->i == tmp)
		ft_6_5(list_a, list_b);
	else if ((*list_a)->next->next->next->next->next->i == tmp)
		ft_6_6(list_a, list_b);
}
