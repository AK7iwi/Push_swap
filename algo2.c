/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 22:20:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int chunksize(t_stack **a)
{
	int i;
	int nbchunk;
	
	i = ft_dlstsize(*a);
	if(i > 5 && i <= 10)
		nbchunk = 2;
	else if (i > 10 && i < 50)
		nbchunk = 4;
	else if(i => 50 && <= 100)
		nbchunk = 5;
	else if (i > 100)
		nbchunk = 11;
	return(nbchunk);
}

void presort6to100val(t_stack **a, t_stack *tmp, t_stack *tmp2, int i)
{
    int j;
	int rest;
	int size;
	
    size = ft_dlstsize(*a);
    j = size / i;
	rest = size % i;
	while()
	{
		
	}
}
    // while(j <= i)
    // {
    //     tmp = *a;
    //     *a = (*a)->next;
    //     tmp = tmp->next;
    //     j++;
    // }
    // j++;
    // while(j <= ft_dlstsize(*a))
    // {
    //     tmp2 = *a;
    //     *a = (*a)->next;
    //     tmp2 = tmp2->next;
    //     j++;
    // }

int find_low_pos(t_stack *tmp)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(tmp)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
    }
    return(pos);
}

void pushlowpos(t_stack **a, t_stack **b, t_stack *tmp, t_stack *tmp2)
{
	int sizeend;
	
	sizeend = ft_dlstsize(tmp2);
	if(find_low_pos(tmp) < sizeend - find_low_pos(tmp2))
    {
        while(find_low_pos(tmp) != 1)
            ra(a);
    }
    else if (find_low_pos(tmp) == sizeend - find_low_pos(tmp2))
    {
        while(find_low_pos(tmp) != 1)
            ra(a);
    }
    else
    {
        while(find_low_pos(tmp2) != sizeend)
            rra(a);
		rra(a);
    }	
	pb(a, b);
}

void sort6to100val(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    t_stack *tmp2;
	int i;

	i = chunksize(a);
	tmp = NULL;
	tmp2 = NULL;
	while() // nombre de stack 
    presort6to100val(a, tmp, tmp2,i);
	pushlowpos(a, b, tmp, tmp2);
	sort6to100val(a,b);
}
//  utiliser la taille des stack tmp et pas creer des stacks. Trouver le min diff;