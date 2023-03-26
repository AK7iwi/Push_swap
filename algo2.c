/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/26 01:52:32 by mfeldman         ###   ########.fr       */
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
  
int find_low_pos(t_stack *tmp)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(tmp)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
    }
    return(pos);
}

void pushlowpos(t_stack **a, t_stack **b, t_stack *tmp, t_stack *tmp2)
{
	int diff;
	int diff2;
	
	diff = find_low_pos(tmp);
	diff2 = ft_dlstsize(tmp2) - find_low_pos(tmp2);
	
    if(find_low_pos(tmp) <= diff2)
    {
        while(diff != 0)
		{
			ra(a);
			diff--;
		}
    }
    else
    {
        while(diff2 != 0)
		{
            rra(a);
			diff2--;
		}
		rra(a);
    }	
	pb(a, b);
}

void presort6to100val(t_stack **a, t_stack **b, int i, char **argv)
{
	int j;
    int k;
	int size;
	t_stack *tmp;
	t_stack *tmp2;
	
	tmp = NULL;
	tmp2 = NULL;
    size = ft_dlstsize(*a);
    j = size / i;
    k = 1;
	while(argv[k] && k < j)
		ft_dlstadd_back(&tmp, ft_atoi(argv[k++]));
	k = size - j;
	while(argv[k] && k <= size)
		ft_dlstadd_back(&tmp2, ft_atoi(argv[k++]));
	pushlowpos(a,b,tmp,tmp2);
}

void sort6to100val(t_stack **a, t_stack **b,char **argv)
{
	int i;
	
	i = chunksize(a);
    presort6to100val(a,b,i,argv);
    if(ft_dlstsize(*a) != 0)
		sort6to100val(a,b,argv);
	if(ft_dlstsize(*b) != 0)
		sort6to100val(b,a,argv);
}