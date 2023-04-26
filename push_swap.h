/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/08 07:30:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "./libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack *next;
}	t_stack;

/*Main*/

void push_swap(t_stack **a,t_stack **b);

/*Instructions*/

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_a);
void rr(t_stack **a, t_stack **b);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);

/* Parsing */

int ft_parsing(char **argv);
int ft_checkdouble(char **argv);
void ft_error();

/*Fct liste chainee*/

void 		ft_dlstadd_back(t_stack **l, int val);
int			ft_dlstsize(t_stack *lst);
void 		ft_dlstfree(t_stack **lst);
void		ft_freeall(t_stack **a,t_stack **b);
int 		ft_dlstmin(t_stack *lst);
int			ft_dlstmax(t_stack *lst);
int 		find_min_pos(t_stack * tmp);
int 		find_max_pos(t_stack *tmp);
int 		find_pos(t_stack *tmp, int i);
int 		scanbottom(t_stack **a, int lim, int val);
int 		scantop(t_stack **a,int lim, int val);

/*Algo et tri*/

int 	is_sorted(t_stack *lst);
void 	sort3val(t_stack **a);
void 	sort4val(t_stack **a, t_stack **b);
void	sort5val(t_stack **a, t_stack **b);
void 	pushmaxpos(t_stack **a, t_stack **b);
void 	presort6to100val(t_stack **a, t_stack **b, int lim, int val);
int 	*sort(int *arr, t_stack **al);
int 	*array(t_stack **l);
void 	sort6to100val(t_stack **a, t_stack **b);
int 	limchunk(t_stack **a); 
int 	limval(t_stack **a, int pos);
void 	pushbottom(t_stack **a, int pos);
void 	pushtop(t_stack **a, int pos);
void 	optipush(t_stack **b);


#endif