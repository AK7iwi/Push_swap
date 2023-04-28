/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:08:24 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/28 02:33:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void insert_best_spot(t_stack **a,t_stack **b)
{
	int val;

	val = (*a)->value
}


void pushmaxpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;

	pos1 = find_max_pos(*b);
	pos2 = ft_dlstsize(*b) - pos1;
	if (pos1 <= ft_dlstsize(*b) / 2)
	{
		while (pos1 > 1)
		{
			rb(b);
			pos1--;
		}
	}
	else
	{
		while (pos2 >= 0)
		{
			rrb(b);
			pos2--;
		}
	}
	pa(a, b);
}

void optipush(t_stack **b)
{
	int *arrayB;
	int lim;
	int val;
	int size;
	
	if ((*b) == NULL || (*b)->next == NULL)
        return ;
	arrayB = array(b);
	lim = limchunk(b);
	val = limval(b,lim);
	size = ft_dlstsize(*b);
	if(arrayB[0] < arrayB[size - 1])
		rb(b);
	else if(arrayB[0] < arrayB[1] && (*b)->value > val)
		sb(*b);
	else if ((*b)->value < val)
	{
		while ((*b)->value < val)
			rb(b);
	}
	free(arrayB);
}