/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:02:30 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 11:03:43 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_4_1(t_list **list_a, t_list **list_b)
{
	ft_pb(list_a, list_b);
	ft_len3(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_4_2(t_list **list_a, t_list **list_b)
{
	ft_sa(list_a);
	ft_pb(list_a, list_b);
	ft_len3(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_4_3(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len3(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_4_4(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_pb(list_a, list_b);
	ft_len3(list_a, list_b);
	ft_pa(list_a, list_b);
}

void	ft_len4(t_list **list_a, t_list **list_b)
{
	int	tmp;

	(void) list_b;
	tmp = ft_list_min(list_a);
	if ((*list_a)->i == tmp)
		ft_4_1(list_a, list_b);
	else if ((*list_a)->next->i == tmp)
		ft_4_2(list_a, list_b);
	else if ((*list_a)->next->next->i == tmp)
		ft_4_3(list_a, list_b);
	else if ((*list_a)->next->next->next->i == tmp)
		ft_4_4(list_a, list_b);
}
