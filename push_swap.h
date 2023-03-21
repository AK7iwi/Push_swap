/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/21 17:51:01 by mfeldman         ###   ########.fr       */
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

/*Structure pour avoir qu'un pointeur*/

typedef struct s_listdc
{
    t_stack *first;
	t_stack *last;
} t_listdc;


/*Main*/

void push_swap(t_listdc *l);

/*Instructions*/

void sa(t_listdc *a);
void sb(t_listdc *b);
void ss(t_listdc *a, t_listdc *b);
void ra(t_listdc *a);
void rb(t_listdc *a);
void rr(t_listdc *a, t_listdc *b);
void rra(t_listdc *a);
void rrb(t_listdc *b);
void rrr(t_listdc *a, t_listdc *b);
void pa(t_listdc *a, t_listdc *b);
void pb(t_listdc *a, t_listdc *b);

/* Parsing */

int ft_parsing(char **argv);
int ft_checkdouble(char **argv);
void ft_error(); 


/*Fct liste chainee*/

void 		ft_dlstinit(t_listdc *l);
void 		ft_dlstadd_front(t_listdc *l, int val);
void 		ft_dlstadd_back(t_listdc *l, int val);
int			ft_dlstsize(t_listdc *l);
void 		ft_dlstfree(t_listdc *l);
int 		ft_dlstmax(t_listdc *l);
int 		ft_dlstmin(t_listdc *l);

/*Algo et tri*/

int is_sorted(t_listdc *l);
void sort3val(t_listdc *a);
void sort5val(t_listdc *a, t_listdc *b);

#endif