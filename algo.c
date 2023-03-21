/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/21 18:03:22 by mfeldman         ###   ########.fr       */
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

void sort5val(t_listdc *a, t_listdc *b)
{
    int min;
	int max;

    if (a->first->value > a->first->next->value)
        sa(a);
    pa(a, b);
    pa(a, b);
    sort3val(a);

    min = ft_dlstmin(a);
    max = ft_dlstmax(a);
    while (b->first)
    {
        if (b->first->value == max)
        {
            pb(a, b);
            ra(a);
        }
        else if (b->first->value == min)
            pb(a,b);
        else
        {
			pb(a, b);
            rra(a);
        }
    }
}