/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 01:51:17 by mfeldman         ###   ########.fr       */
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
			find_low_pos()
			pushlowpos
			pb(a,b);
		tmp = tmp->next;
		(*a) = (*a)->next;
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

int *sort(int *arr, t_stack **al)
{
	int		i;
	int		j;
	int		tmp;
	
	i = 0;
	while(i < ft_dlstsize(*al))
	{
		j = i + 1;
		while(j < ft_dlstsize(*al))
		{
			if(arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return(arr);
}

int mediane(t_stack **a)
{
	int mid;
	int *arr;
	int i;
	int cpy;
	
	i = 0;
	mid = ft_dlstsize(*a) / 2;
	arr = array(*a);
	sort(arr,a);
	while(arr[i])
	{
		if(arr[i] == mid)
			break ;
		i++;
	}
	cpy = arr[i];
	free(arr);
	return(cpy);
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