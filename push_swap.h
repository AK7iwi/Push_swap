/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/20 23:43:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "./libft/libft.h"

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

void *push_swap(t_listdc *l);

/*Instructions*/

void sa(t_listdc *a);
void sb(t_listdc *b);
void ft_pa(t_listdc *l1, t_listdc *l2);
void ft_pb(t_listdc *l1, t_listdc *l2);

/* Parsing */
int ft_parsing(char **argv);
int ft_checkdouble(char **argv);
void *ft_error(); 


/*Fct liste chainee*/

void 		ft_dlstinit(t_listdc *l);
void 		ft_dlstadd_front(t_listdc *l, int val);
void 		ft_dlstpop_front(t_listdc *l);
int			ft_dlstsize(t_listdc *l);
void 		ft_dlstfree(t_listdc *l);

#endif