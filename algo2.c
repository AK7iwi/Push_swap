/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 22:19:12 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pushlowpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;

	pos1 = find_max_pos(*b);
	pos2 = ft_dlstsize(*b) - pos1;
    if(pos1 < ft_dlstsize(*b) / 2)
    {
        while(pos1 > 0)
		{
			rb(b);
			pos1--;
		}
    }
    else
    {
        while(pos2 > 0)
		{
            rrb(b);
			pos2--;
		}
	}
	pa(a, b);
}

void pushtop(t_stack **a, t_stack **b, int pos)
{
	int pos2;

	pos2 = ft_dlstsize(*a) - pos;
    if(pos < ft_dlstsize(*a) / 2)
    {
        while(pos > 1)
		{
			ra(a);
			pos--;
		}
    }
    else
    {
        while(pos2 > 0)
		{
            rra(a);
			pos2--;
		}
		rra(a);
	}
	pb(a, b);
}

void pushtopB(t_stack **b, t_stack **a, int pos)
{
	int pos2;

	pos2 = ft_dlstsize(*b) - pos;
    if(pos < ft_dlstsize(*b) / 2)
    {
        while(pos > 1)
		{
			ra(a);
			pos--;
		}
    }
    else
    {
        while(pos2 > 0)
		{
            rrb(b);
			pos2--;
		}
		rrb(b);
	}
	pa(a, b);
}


void presort6to100valB(t_stack **a, t_stack **b, int val)
{
	int pos1;
	int pos2;

	pos1 = scantop(b,val);
	pos2 = scanbottom(b,val);

	if (pos1 > pos2)
		pushtopB(b,a,pos1);
	else 
		pushtopB(b,a,pos2);
}

void presort6to100val(t_stack **a, t_stack **b, int val)
{
	int pos1;
	int pos2;

	pos1 = scantop(a,val);
	pos2 = scanbottom(a,val);

	if (pos1 > pos2)
		pushtop(a,b,pos1);
	else 
		pushtop(a,b,pos2);
	
}

void sort6to100val(t_stack **a, t_stack **b)
{
	int i;
	int j;
	int k;

	j = ft_dlstsize(*a);
	i = medianeval(a);
	k = medianeval(b);
    while(j > 3)
	{
		presort6to100val(a,b,i);
		j--;
	}
	sort3val(a);
	while(*b)
		presort6to100valB(b,a,k);
}

// void optipush(t_stack **l, int val)
// {
// 	if(is_push_safe(l,val) == 1)
// 		rra(l);
// 	if(is_push_safe(l,val) == 1)
// 		rrb(l);
// }