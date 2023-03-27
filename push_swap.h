/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 22:16:17 by mfeldman         ###   ########.fr       */
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
void	ft_putstr(char *str);

/*Fct liste chainee*/

void 		ft_dlstadd_back(t_stack **l, int val);
int			ft_dlstsize(t_stack *lst);
void 		ft_dlstfree(t_stack **lst);
void		ft_freeall(t_stack **a,t_stack **b);
int 		ft_dlstmin(t_stack *lst);
int			ft_dlstmax(t_stack *lst);
int 		find_min_pos(t_stack * tmp);
int 		find_max_pos(t_stack *tmp);
// int 		mediane(t_stack **a);
int 		find_pos(t_stack *tmp, int i);
void 		pushtop(t_stack **a, t_stack **b, int pos);
int 		is_push_safe(t_stack **b, int num);
int 		scanbottom(t_stack **a, int val);
int 		scantop(t_stack **a, int i);
int			poschunk(int size);
int 		medianepos(t_stack **a);
int			valchunk(int *arr, int size);
int 		medianeval(t_stack **a);

/*Algo et tri*/

int 	is_sorted(t_stack *lst);
void 	sort3val(t_stack **a);
void 	sort4val(t_stack **a, t_stack **b);
void	sort5val(t_stack **a, t_stack **b);
void 	pushlowpos(t_stack **a, t_stack **b);
void 	presort6to100val(t_stack **a, t_stack **b, int val);
void 	presort6to100valB(t_stack **a, t_stack **b, int val);
int 	*sort(int *arr, t_stack **al);
int 	*array(t_stack **a, int start, int end);
void 	sort6to100val(t_stack **a, t_stack **b);
void 	pushtopB(t_stack **a, t_stack **b, int pos);


#endif