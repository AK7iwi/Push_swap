/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 05:53:12 by mfeldman         ###   ########.fr       */
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
	struct s_stack *prev;
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
int 		ft_dlstmax(t_stack *);
int 		ft_dlstmin(t_stack *lst);
t_stack 	ft_dlstcpy1(t_stack **a, int i);
t_stack 	ft_dlstcpy2(t_stack **a,  int i);

/*Algo et tri*/

int is_sorted(t_stack *lst);
void sort3val(t_stack **a);
void sort4val(t_stack **a, t_stack **b);
void presort5val(t_stack **a, t_stack **b, int i);
void	sort5val(t_stack **a, t_stack **b);
void sort6to100val(t_stack **a, t_stack **b);

#endif