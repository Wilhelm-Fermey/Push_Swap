/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:29:28 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 11:02:38 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_2(t_list **list_a, t_list **list_b)
{
	(void) list_b;
	ft_rra(list_a);
	ft_sa(list_a);
}

void	ft_5(t_list **list_a)
{
	ft_sa(list_a);
	ft_rra(list_a);
}

void	ft_len3(t_list **list_a, t_list **list_b)
{
	if (((*list_a)->i < (*list_a)->next->i)
		&& ((*list_a)->next->i > (*list_a)->next->next->i)
		&& ((*list_a)->next->next->i > (*list_a)->i))
		ft_2(list_a, list_b);
	else if (((*list_a)->i > (*list_a)->next->i)
		&& ((*list_a)->next->i < (*list_a)->next->next->i)
		&& ((*list_a)->next->next->i > (*list_a)->i))
		ft_sa(list_a);
	else if (((*list_a)->i < (*list_a)->next->i)
		&& ((*list_a)->next->i > (*list_a)->next->next->i)
		&& ((*list_a)->next->next->i < (*list_a)->i))
		ft_rra(list_a);
	else if (((*list_a)->i > (*list_a)->next->i)
		&& ((*list_a)->next->i < (*list_a)->next->next->i)
		&& ((*list_a)->next->next->i < (*list_a)->i))
		ft_ra(list_a);
	else if (((*list_a)->i > (*list_a)->next->i)
		&& ((*list_a)->next->i > (*list_a)->next->next->i)
		&& ((*list_a)->next->next->i < (*list_a)->i))
		ft_5(list_a);
}
