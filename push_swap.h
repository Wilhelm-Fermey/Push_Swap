/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:26:52 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/25 15:28:55 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_list t_list;

struct s_list
{
	int		i;
	t_list	*next;
};

/////  CHECK INPUT  /////
int ft_check_tab_max(int a, char *str);
int ft_check_same(int len, int *tab);
int ft_check_num(char *str);
int *ft_check(int len, char **str);
int *ft_check2(int len, char **str);


///// MAIN /////
int ft_tablen(char **tab);
int	*ft_read(int argc, char **argv, int *res);

///// STRUCT /////
t_list  *add_struct(int content);
void    add_list(t_list **list, t_list *new);
void    add_list_back(t_list **list, t_list *new);
t_list  *ft_last_list(t_list **list);
t_list  *ft_read_struct(int *tab, int len);

/////  SORT  /////
int check_sort(t_list **list);
t_list  *ft_dupl_tab(int len);
t_list  *ft_before_last_list(t_list **list);
void    ft_read_sort(t_list **list_a, int len);

/////  SORT 3  /////
void    ft_2(t_list **list_a, t_list **list_b);
void    ft_5(t_list **list_a);
void    ft_len3(t_list **list_a, t_list **list_b);

/////  OPERATIONS  /////
void    ft_sa(t_list **list);
void    ft_ra(t_list **list);
void    ft_rra(t_list **list);
void    ft_pb(t_list **list_a, t_list **list_b);
void    ft_pa(t_list **list_a, t_list **list_b);

#endif
