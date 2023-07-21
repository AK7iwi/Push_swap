/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 05:43:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

/*Main*/

void	push_swap(t_stack **a, t_stack **b);

/*Instructions*/

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **a);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

/* Parsing */

int		ft_parsing(char **argv);
int		ft_checkdouble(char **argv);
void	ft_error(void);
int		ft_check_int_max_min(char *argv);
int		ft_isdigitc(char c);

/*Fct liste chainee*/

void	ft_lstadd_back_int(t_stack **lst, int val);
int		ft_lstsize(t_stack *lst);
void	ft_lstfree(t_stack **lst);
void	ft_freeall(t_stack **a, t_stack **b);
int		ft_lstmin(t_stack *lst);
int		ft_lstmax(t_stack *lst);
int		find_min_pos(t_stack *tmp);
int		find_max_pos(t_stack *tmp);
int		scanbottom(t_stack **a, int val);
int		scantop(t_stack **a, int val);

/*Algo et tri*/

int		ft_atoi(const char *nptr);
int		is_sorted(t_stack *lst);
void	sort3val(t_stack **a);
void	sort4val(t_stack **a, t_stack **b);
void	sort5val(t_stack **a, t_stack **b);
void	postop(t_stack **b, int pos);
void	presort6to100val(t_stack **a, int val);
int		*sort(int *arr, int len);
int		*array(t_stack **a);
void	sort6to100val(t_stack **a, t_stack **b);
int		limchunk(t_stack **a);
int		limval(t_stack **a);
void	pushbottom(t_stack **a, int pos);
void	pushtop(t_stack **a, int pos);

#endif