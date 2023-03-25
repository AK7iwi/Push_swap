/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/25 15:38:54 by mfeldman         ###   ########.fr       */
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
	else if(i >= 50 && i <= 100)
		nbchunk = 5;
	else if (i > 100)
		nbchunk = 10;
	return(nbchunk);
}
//bug sur les tailles impaire  
void presort6to100val(t_stack **a, t_stack *tmp, t_stack *tmp2, int i)
{
    int j;
    int k;
	int rest;
	int size;
	
    size = ft_dlstsize(*a);
    j = size / i;
    rest = size % i;
    k = 0;
    while(k <= j)
    {
        ft_dlstadd_back(&tmp, (*a)->value);
        (*a) = (*a)->next;
        k++;
    }
    while(k > j && k <= size - i - rest)  
        k++;
    while(k <= size)
    {
        ft_dlstadd_back(&tmp2, (*a)->value);
        (*a) = (*a)->next;
        k++;
    }
}

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
    if (!a || !*a || !b || !tmp || !tmp2)
        return;
    if(find_low_pos(tmp) <= sizeend - find_low_pos(tmp2))
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
    presort6to100val(a, tmp, tmp2,i);
	pushlowpos(a, b, tmp, tmp2);
    if(ft_dlstsize(*a) != 0)
    {
        sort6to100val(a,b);
        ft_freeall(&tmp, &tmp2);
    }
    if(ft_dlstsize(*b) != 0)
    {
        sort6to100val(b,a);
        ft_freeall(&tmp, &tmp2);
    }
    ft_freeall(&tmp, &tmp2);
}
// //  utiliser la taille des stack tmp et pas creer des stacks. Trouver le min diff;
// //allocation memoire pour les tmp
