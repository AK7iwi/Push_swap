/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/26 23:17:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pushlowpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;
	
	pos1 = find_low_pos(*a);
	pos2 = ft_dlstsize(*a) - pos1;
    if(pos1 <= ft_dlstsize(*a) / 2)
    {
        while(pos1 > 1)
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

void presort6to100val(t_stack **a, t_stack **b, int i)
{
	t_stack *tmp;
	tmp = *a;
	while(tmp)
	{
		if(tmp->value < i)
			pb(a,b);
		tmp = tmp->next;
	}
}


int *array(t_stack *tmp)
{
	int *arr;
	int size;
	int i;

	size = ft_dlstsize(tmp);
	i = 0;
	arr = malloc(sizeof(int) * (size + 1));
	if(!arr)
		return(0);
	while(tmp)
	{
		arr[i] = tmp->value;
		tmp = tmp->next;
		i++;
	}
	return(arr);
}

void sort(int *arr, t_stack *a)
{
	int i;
	int j;
	int tmp;
	i = 0;
	while(i < ft_dlstsize(a))
	{
		j = i +1;
		while(j < ft_dlstsize(a))
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
			j++;
		}
		i++;
	}
}

int mediane(t_stack **a)
{
	int mid;
	int *arr;
	t_stack *tmp;
	
	tmp = *a;
	mid = ft_dlstsize(tmp) / 2;
	arr = array(*a);
	sort(arr,tmp);
	while(mid > 0)
	{
		tmp = tmp->next;
		mid--;
	}
	return(tmp->value);
}

void sort6to100val(t_stack **a, t_stack **b,char **argv)
{
	int i;
	
	i = mediane(a);
    if(ft_dlstsize(*a) > 3)
	{	
		presort6to100val(a,b,i);
		pushlowpos(a,b);
		sort6to100val(a,b,argv);
	}
	sort3val(a);
	while(ft_dlstsize(*b) != 0)
		pa(a,b);
}