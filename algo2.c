/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/26 10:04:51 by mfeldman         ###   ########.fr       */
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
  
int find_low_pos_highstack(t_stack *tmp, int sizechunk)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(sizechunk > 0)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
		sizechunk--;
    }
    return(pos);
}

int find_low_pos_lowstack(t_stack *tmp, int sizechunk)
{
    t_stack *tmp2;
	int i;
	i = ft_dlstsize(tmp) - sizechunk;
	
    while (i > 0)
    {
        tmp = tmp->next;
		i--;
    }
	while(sizechunk > 0)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		tmp2 = tmp2->next;
		sizechunk--;
	}
    return (ft_dlstsize(tmp) - find_low_pos(tmp2));
}

void pushlowpos(t_stack **a, t_stack **b, int nbchunk)
{
	int pos1;
	int pos2;
	
	pos1 = find_low_pos_highstack(*a, ft_dlstsize(*a) / nbchunk);
	pos2 = find_low_pos_lowstack(*a, ft_dlstsize(*a) / nbchunk);
    if(pos1 <= pos2)
    {
        while(pos1 > 1)
		{
			ra(a);
			pos1--;
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

void sortb(t_stack **b)
{
	int top;
	int second;
	top = (*b)->value;
	second = (*b)->next->value;
	if(top < second)
		sb(*b);
	else 
		return;
}

void sort6to100val(t_stack **a, t_stack **b,char **argv)
{
	int i;
	i = chunksize(a);
    if(ft_dlstsize(*a) != 5)
	{	
		pushlowpos(a,b,i);
		sort6to100val(a,b,argv);
	}
	sort5val(a,b);
	while(ft_dlstsize(*b) != 0)
		pa(a,b);
}