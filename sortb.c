/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:08:24 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/30 18:18:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_best_spot(t_stack **b, int val)
{
	t_stack *tmp;
	int pos;

	tmp = (*b);
	pos = 0;
	while(tmp && tmp->next)
	{
		if(val < tmp->value && val > tmp->next->value)
			{
				pos++;
				break;
			}
		tmp = tmp->next;
		pos++;
	}
	return(pos + 1); //verif pos 
}

void insert_best_spot(t_stack **a,t_stack **b)
{
	int val;
	int maxpos;
	int minpos;
	int spotpos;

	val = (*a)->value;
	maxpos = find_max_pos(*b);
	minpos = find_min_pos(*b);
	spotpos = find_best_spot(b,val);
	if(val > ft_dlstmax(*b))
		postop(b,minpos);
	else if(val < ft_dlstmin(*b))
		postop(b,maxpos);
	if(val < ft_dlstmax(*b) && val > ft_dlstmin(*b))
		postop(b,spotpos);
}

void postop(t_stack **b, int pos)
{
	int pos1;
	int pos2;
	
	pos1 = pos;
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
}

void optipush(t_stack **b)
{
	int *arrayB;
	int val;

	if ((*b) == NULL || (*b)->next == NULL)
        return ;
	arrayB = array(b);
	val = limval(b);
	if(arrayB[0] < arrayB[1])
		sb(*b);
	else if ((*b)->value < val)
	{
		while ((*b)->value < val)
			rb(b);
	}
	free(arrayB);
}