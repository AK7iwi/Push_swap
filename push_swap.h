/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:42:11 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/06 23:36:33 by mfeldman         ###   ########.fr       */
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

char *ft_parsing(char *argv);
void *push_swap(t_listdc *l);

void 		ft_dlstfree(t_listdc *l);
void 		ft_dlstinit(t_listdc *l);
void 		*ft_dlstfill(t_listdc *l, int val);
int			ft_dlstsize(t_listdc *l);

#endif