/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:26:52 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/30 10:59:50 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_list	t_list;

struct s_list
{
	int		i;
	int		index;
	t_list	*next;
};

/////  CHECK INPUT  /////
int		ft_check_tab_max(int a, char *str);
int		ft_check_same(int len, int *tab);
int		ft_check_num(char *str);
int		*ft_check(int len, char **str);
int		*ft_check2(int len, char **str);

///// MAIN /////
int		ft_tablen(char **tab);
int		*ft_read(int argc, char **argv, int *res);

///// STRUCT /////
t_list	*add_struct(int content);
void	add_list(t_list **list, t_list *new);
void	add_list_back(t_list **list, t_list *new);
t_list	*ft_last_list(t_list **list);
t_list	*ft_read_struct(int *tab, int len);

/////  SORT  /////
int		ft_list_min(t_list **list);
int		check_sort(t_list **list);
t_list	*ft_before_last_list(t_list **list);
void	ft_read_sort(t_list **list_a, int len);

/////  SORT 3  /////
void	ft_2(t_list **list_a, t_list **list_b);
void	ft_5(t_list **list_a);
void	ft_len3(t_list **list_a, t_list **list_b);

/////  SORT 4  /////
void	ft_4_1(t_list **list_a, t_list **list_b);
void	ft_4_2(t_list **list_a, t_list **list_b);
void	ft_4_3(t_list **list_a, t_list **list_b);
void	ft_4_4(t_list **list_a, t_list **list_b);
void	ft_len4(t_list **list_a, t_list **list_b);

/////  SORT 5  /////
void	ft_5_3(t_list **list_a, t_list **list_b);
void	ft_5_4(t_list **list_a, t_list **list_b);
void	ft_5_5(t_list **list_a, t_list **list_b);
void	ft_len5(t_list **list_a, t_list **list_b);

/////  SORT 6  /////
void	ft_6_3(t_list **list_a, t_list **list_b);
void	ft_6_4(t_list **list_a, t_list **list_b);
void	ft_6_5(t_list **list_a, t_list **list_b);
void	ft_6_6(t_list **list_a, t_list **list_b);
void	ft_len6(t_list **list_a, t_list **list_b);

////  SORT ALL  ////
int		ft_get_bits(int num);
void	sort_unite(t_list **list_a, t_list **list_b, int j, int len);
void	ft_sortall(t_list **list_a, t_list **list_b, int len);

/////  PUSH INDEX  /////
void	ft_index(t_list **list_a, int i, int index);
void	indexlist(t_list **list_a);

/////  OPERATIONS  /////
void	ft_sa(t_list **list);
void	ft_ra(t_list **list);
void	ft_rra(t_list **list);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **list_a, t_list **list_b);

#endif
