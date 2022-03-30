/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:29:00 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/29 16:32:07 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **list_a, int i, int index)
{
	t_list	*tmp;

	tmp = *list_a;
	while (tmp->i != i)
		tmp = tmp->next;
	tmp->index = index;
}

void	indexlist(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp2;
	int 	i;
	int		index;

	tmp = *list_a;
	i = tmp->i;
	index = 0;
	while (tmp)
	{
		tmp2 = *list_a;
		i = tmp->i;
		while (tmp2)
		{
			if (tmp2->i < i)
				index++;
			tmp2 = tmp2->next;
		}
		ft_index(list_a, i, index);
		index = 0;
		tmp = tmp->next;
	}
}
