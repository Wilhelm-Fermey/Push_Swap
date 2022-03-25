/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:02:30 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/25 09:58:59 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_len(t_list *list)
{
	int			i;
	t_list		*tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	ft_list_min(t_list *list)
{
	int	tmp;
	int	len;
	int	j;

	j = 1;
	if (!list)
		return (0);
	else if (ft_list_len(list) == 1)
		return (list->i);
	else
	{
		tmp = list->i;
		while (list)
		{
			if (tmp > list->i)
				tmp = list->i;
			list = list->next;
		}
	}
	return (tmp);
}

void	ft_4_1(t_list *list_a, t_list *list_b)
{
	ft_pb(&list_a, &list_b);
	ft_len3(list_a, list_b);
	ft_pa(&list_a, &list_b);
}

void	ft_4_2(t_list *list_a, t_list *list_b)
{
	ft_sa(&list_a);
	list_a = list_a->next;
	ft_len3(list_a, list_b);
}
/*
void	ft_4_3(t_list *list_a, t_list *list_b)
{
	
}


void	ft_4_4(t_list *list_a, t_list *list_b)
{

}
*/
void	ft_len4(t_list *list_a, t_list *list_b)
{
	int	tmp;

	tmp = ft_list_min(list_a);
	if (list_a[0].i == tmp)		// 1
		ft_4_1(list_a, list_b);
	else if (list_a[1].i == tmp)	// 2
		ft_4_2(list_a, list_b);	
	/*
	else if (list_a[2].i == tmp)	// 3
		ft_4_3(list_a, list_b);	
	else if (list_a[3].i == tmp)	// 4
		ft_4_4(list_a, list_b);	
	*/
}

#include <stdio.h>
int	main(void)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*new;

	list_a = add_struct(4);
	new = add_struct(1);
	add_list_back(&list_a, new);
	new = add_struct(3);
	add_list_back(&list_a, new);
	new = add_struct(2);
	add_list_back(&list_a, new);

	list_b = add_struct(0);
	new = add_struct(0);
	add_list_back(&list_b, new);
	new = add_struct(0);
	add_list_back(&list_b, new);
	new = add_struct(0);
	add_list_back(&list_b, new);


	ft_len4(list_a, list_b);
/*
	while (list_a)
	{
		printf("%d\n", list_a->i);
		list_a = list_a->next;
	}
	printf("\n\n");
	while (list_b)
	{
		printf("%d\n", list_b->i);
		list_b = list_b->next;
	}
	*/
}
