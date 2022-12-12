/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/12 06:05:47 by mfeldman         ###   ########.fr       */
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

typedef struct
{
    t_stack *first;
	t_stack *last;
} t_listdc;

int ft_parsing(char **argv);
void *push_swap(t_listdc *l);
void *ft_error(); //char **argv
void ft_free_split(int argc,char **argv);
int ft_checkdouble(char **argv);

/*Fct liste chainee*/

void 		ft_dlstfree(t_listdc *l);
void 		ft_dlstinit(t_listdc *l);
void 		*ft_dlstfill(t_listdc *l, int val);
int			ft_dlstsize(t_listdc *l);

#endif