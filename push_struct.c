/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:39:38 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 10:54:00 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_struct(int content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->i = content;
	tmp->next = NULL;
	return (tmp);
}

void	add_list(t_list **list, t_list *new)
{
	if (list && new)
	{
		new->next = *list;
		*list = new;
	}
}

void	add_list_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	if (!list)
		return ;
	if (*list)
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*list = new;
}

t_list	*ft_last_list(t_list **list)
{
	while ((*list)->next)
		*list = (*list)->next;
	return (*list);
}

t_list	*ft_read_struct(int *tab, int len)
{
	t_list	*list;	
	t_list	*next;
	int		i;

	i = 1;
	list = NULL;
	if (len > 0)
	{
		list = add_struct(tab[0]);
		while (i < len)
		{
			next = add_struct(tab[i]);
			add_list_back(&list, next);
			i++;
		}
	}
	return (list);
}
