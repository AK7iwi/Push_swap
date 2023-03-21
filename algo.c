/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/21 22:49:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort3val(t_listdc *a)
{
	t_stack *tmp;
	tmp = a->first;
	int top;
	int mid;
	int bottom;
	top = tmp->value;
	mid = tmp->next->value;
	bottom = tmp->next->next->value;
	if (top > mid && mid < bottom && bottom > top)
		sa(a);
	else if (top > mid && mid > bottom && bottom < top)
	{
		sa(a);
		rra(a);
	}
	else if (top > mid && mid < bottom && bottom < top)
		ra(a);
	else if (top < mid && mid > bottom && bottom < top)
	{
		sa(a);
		ra(a);
	}
	else if (top < mid && mid > bottom && bottom > top)
		rra(a);
}

void sort4val(t_listdc *a, t_listdc *b)
{
	int top;
	int mid1;
	int mid2;
	int bottom;
	int min;
	t_stack *tmp;
	
	tmp = a->first;
	top = tmp->value;
	mid1 = tmp->next->value;
	mid2 = tmp->next->next->value;
	bottom = tmp->next->next->next->value;
	min = ft_dlstmin(a);
	if(top == min)
		pb(a,b);
	else if(mid1 == min)
	{
		sa(a);
		pb(a,b);
	}	
	else if(mid2 == min)
	{
		ra(a);
		ra(a);
	}	
	else if(bottom == min)
	{
		rra(a);
		pb(a,b);
	}
	sort3val(a);
	pa(a,b);
}

void sort5val(t_listdc *a, t_listdc *b)
{
    int min;
	int max;

    if (a->first->value > a->first->next->value)
        sa(a);
    pb(a, b);
    pb(a, b);
    sort3val(a);

    min = ft_dlstmin(a);
    max = ft_dlstmax(a);
    while (b->first)
    {
        if (b->first->value == max)
        {
            pa(a, b);
            ra(a);
        }
        else if (b->first->value == min)
            pa(a,b);
        else
        {
			pa(a, b);
            rra(a);
        }
    }
}