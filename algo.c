/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/24 15:52:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort3val(t_stack **a)
{
    int top;
    int mid;
    int bottom;
	
    top = (*a)->value;
    mid = (*a)->next->value;
    bottom = (*a)->next->next->value;
    if (top > mid && mid < bottom && bottom > top)
        sa(*a);
    else if (top > mid && mid > bottom && bottom < top)
    {
        sa(*a);
        rra(a);
    }
    else if (top > mid && mid < bottom && bottom < top)
        ra(a);
    else if (top < mid && mid > bottom && bottom > top)
    {
        sa(*a);
        ra(a);
    }
    else if (top < mid && mid > bottom && bottom < top)
        rra(a);
}

void sort4val(t_stack **a, t_stack **b)
{
    int i;

	i = find_min_pos(*a);
	if(i == 2)
		sa(*a);
	else if(i == 3)
	{
		ra(a);
		ra(a);
	}
	else if(i == 4)
		rra(a);
	pb(a, b);
	sort3val(a);
	pa(a, b);
}

void	sort5val(t_stack **a, t_stack **b)
{
	int i;

	i = find_min_pos(*a);
	if(i == 2)
		sa(*a);
	else if(i == 3)
	{
		ra(a);
		ra(a);
	}
	else if(i == 4)
	{
		rra(a);
		rra(a);
	}
	else if(i == 5)
		rra(a);
	pb(a, b);
	sort4val(a,b);
	pa(a, b);
}

void sort6to100val(t_stack **a, t_stack **b)
{
	int j;
	int lim;
	int val;
	
	j = ft_dlstsize(*a);
    while(j > 3)
	{
		lim = limchunk(a);
		val = limval(a,lim);
		while (ft_dlstmin(*a) < val)
		{
			presort6to100val(a,b,lim,val);
			optipush(b);
		}
		j--;
	}
	sort3val(a);
	while(*b)
		pushmaxpos(a,b);
}
