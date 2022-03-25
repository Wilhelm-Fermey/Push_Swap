/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:46:49 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/25 09:56:31 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	*list = (*list)->next;
	tmp2 = *list;
	*list = (*list)->next;
	tmp2->next = tmp;
	tmp->next = *list;
	add_list(&*list, tmp);
	add_list(&*list, tmp2);
	write(1, "sa\n", 3);
}

void	ft_ra(t_list **list)
{
	t_list *tmp;

	tmp = *list;
	*list = (*list)->next;
	tmp->next = NULL;
	add_list_back(&*list, tmp);
	write(1, "ra\n", 3);
}

void	ft_rra(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	tmp2 = ft_before_last_list(&*list);
	*list = ft_last_list(&*list);
	(*list)->next = tmp;
	tmp2->next = NULL;
	write(1, "rra\n", 4);
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3);
}

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3);
}
