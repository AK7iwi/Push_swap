/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 04:54:06 by mfeldman         ###   ########.fr       */
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
    int mid1;
    int mid2;
    int bottom;
    int min;

    mid1 = (*a)->next->value;
    mid2 = (*a)->next->next->value;
    bottom = (*a)->next->next->next->value;
    min = ft_dlstmin(*a);
    if (mid1 == min)
        sa(*a);
    else if (mid2 == min)
    {
        ra(a);
        ra(a);
    }   
    else if (bottom == min)
        rra(a); 
    pb(a, b);
    sort3val(a);
    pa(a, b);
}

void	sort5val(t_stack **a, t_stack **b)
{
	int i;
	int min;
	t_stack *tmp;

	i = 0;
	min = ft_dlstmin(*a);
	tmp = *a;
	while(tmp)
	{
		i++;
		if((tmp)->value == min)
			break;
		tmp = tmp->next;
	}
	presort5val(a, b, i);
	sort4val(a,b);
	pa(a, b);
}

void presort5val(t_stack **a, t_stack **b, int i)
{
	if(i == 2)
		ra(a);
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
}