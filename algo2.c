/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/26 00:49:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pushmaxpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;

	pos1 = find_max_pos(*b);
	pos2 = ft_dlstsize(*b) - pos1;
    if(pos1 <= ft_dlstsize(*b) / 2)
    {
        while(pos1 > 1)
		{
			rb(b);
			pos1--;
		}
    }
    else
    {
        while(pos2 >= 0)
		{
            rrb(b);
			pos2--;
		}
	}
	pa(a, b);
}

void pushtop(t_stack **a, int pos)
{
	while(pos > 1)
	{
		ra(a);
		pos--;
	}
}

void pushbottom(t_stack **a, int pos)
{
	while(pos > 0)
	{
		rra(a);
		pos--;
	}
}
void presort6to100val(t_stack **a, t_stack **b, int lim, int val)
{
	int pos1;
	int pos2;

	pos1 = scantop(a,lim,val);
	pos2 = scanbottom(a,lim,val);
	
	if(pos1 <= pos2)
		pushtop(a,pos1);
	else
		pushbottom(a,pos2);
	pb(a,b);
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