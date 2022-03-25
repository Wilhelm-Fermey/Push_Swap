/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:29:41 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/25 13:49:46 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while(tab[i])
		i++;
	return (i);
}

int	*ft_read(int argc, char **argv, int *res) // regarde si arg " " ou plusieurs.
{
	char	**str;
	int		*tab;
	int		len;

	tab = NULL;
	if (ft_strchr(argv[1], 32))
	{
		str = ft_split(argv[1], ' ');
		len = ft_tablen(str);
		tab = ft_check2(len, str);
		*res = len;
	}
	else
	{
		argc = argc -1;
		tab = ft_check(argc, argv);
		*res = argc;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int		len;
	int		*tab;
	t_list	*list;

	list = NULL;
	if (argc == 1)
		return (0);
	else
	{
		tab = ft_read(argc, argv, &len);
		if (tab)
		{
			list = ft_read_struct(tab, len);
			ft_read_sort(&list, len);
		}
	}

	while (list)
	{
		printf("%d\n", list->i);
		list = list->next;
	}
}
