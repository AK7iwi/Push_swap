/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/07 02:36:03 by mfeldman         ###   ########.fr       */
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
	int l;
	int lim;
	int val;
	
	j = ft_dlstsize(*a);
    while(j > 3)
	{
		lim = limchunk(a);
		val = limval(a,lim);
		presort6to100val(a,b,lim,val);
		optipush(b);
		j--;
	}
	sort3val(a);
	l = ft_dlstsize(*b);
	while(l > 0)
	{
		pushlowpos(a,b);
		l--;
	}
}

// void sort6to100val(t_stack **a, t_stack **b)
// {
// 	int j;
// 	int l;
// 	int lim;
// 	int val;
	
// 	l = ft_dlstsize(*b);
// 	// lim = limchunk(a);
// 	// val = limval(a,lim);
//     while(*a)
// 	{
// 		j = ft_dlstsize(*a);
// 		lim = limchunk(a);
// 		val = limval(a,lim);
// 		while(j > ft_dlstsize(*a) / 2)	
// 		{
// 			presort6to100val(a,b,lim,val);
// 			optipush(b);
// 			j--;
// 		}
// 		// j--;
// 	}
// 	while(l>0)
// 	{
// 		pushlowpos(a,b);
// 		l--;
// 	}
// }