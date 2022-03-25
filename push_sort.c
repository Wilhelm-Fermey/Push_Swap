/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:31:34 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/25 15:31:14 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_sort(t_list **list)
{
	int	j;
	t_list *tmp;

	j = 0;
	tmp = *list;
	while (tmp->next)
	{
		if (tmp->i > tmp->next->i)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

t_list	*ft_before_last_list(t_list **list)
{
	while ((*list)->next->next)
		*list = (*list)->next;
	return (*list);
}

void	ft_read_sort(t_list **list_a, int len)
{
	t_list	*list_b;

	list_b = NULL;
	if (check_sort(list_a))
	{
		if (len == 2)
			ft_sa(list_a);
		else if (len == 3)
			ft_len3(list_a, &list_b);
	//	else if (len == 4)
			//ft_len4(list_a, list_b);
	}
}
