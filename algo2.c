/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/26 06:04:04 by mfeldman         ###   ########.fr       */
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
  
int find_low_pos(t_stack *tmp, int sizetmp)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(size_tmp != 0)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
		size_tmp--;
    }
    return(pos);
}

void pushlowpos(t_stack **a, t_stack **b, int nbchunk)
{
	int pos1;
	int pos2;
	
	pos1 = find_low_pos(*a, ft_dlstsize(*a) / nbchunk);
	pos2 = ft_dlstsize(*a) - (ft_dlstsize(*a) / nbchunk) * (nbchunk - 1);
    if(pos1 <= pos2)
    {
        while(pos1 != 1)
		{
			ra(a);
			pos1--;
		}
    }
    else
    {
        while(pos2 != 0)
		{
            rra(a);
			pos2--;
		}
		rra(a);
	}
	pb(a, b);
}

void sort6to100val(t_stack **a, t_stack **b,char **argv)
{
    if(ft_dlstsize(*a) != 3)
	{	
		pushlowpos(a,b);
		sort6to100val(a,b,argv);
	}
	sort3val(a);
	while(ft_dlstsize(*b) != 0)
		pa(a,b);
}