/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 10:27:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void pushlowpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;
	
	pos1 = find_max_pos(*b);
	pos2 = ft_dlstsize(*b) - pos1;
    if(pos1 < ft_dlstsize(*b) / 2)
    {
        while(pos1 > 0)
		{
			rb(b);
			pos1--;
		}
    }
    else 
    {
        while(pos2 > 0)
		{
            rrb(b);
			pos2--;
		}
	}
	pa(a, b);
}

void pushtop(t_stack **a, t_stack **b, int i)
{
	int pos2;
	
	pos2 = ft_dlstsize(*a) - i;
    if(i < ft_dlstsize(*a) / 2)
    {
        while(i > 1)
		{
			ra(a);
			i--;
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

void presort6to100val(t_stack **a, t_stack **b, int i)
{
	t_stack *tmp;
	tmp = (*a);
	int j;

	j = 1; 
	while(tmp)
	{
		if(tmp->value < i)
		{
			pushtop(a,b,j);
		}
		tmp = tmp->next;
		j++;
	}
}

int *array(t_stack **a)
{
	int *arr;
	int size;
	int i;
	t_stack *tmp;

	tmp = *a;
	size = ft_dlstsize(*a);
	i = 0;
	arr = malloc(sizeof(int) * (size));
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

int *sort(int *arr, t_stack **a)
{
	int		i;
	int		j;
	int		tmp;
	
	i = 0;
	while(i < ft_dlstsize(*a) - 1)
	{
		j = i + 1;
		while(j < ft_dlstsize(*a) - 1)
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
	int cpy;
	
	arr = array(a);
	sort(arr,a);
	mid = nbchunk(arr, ft_dlstsize(*a));
	cpy = arr[mid];
	free(arr);
	return(cpy);
}

void sort6to100val(t_stack **a, t_stack **b)
{
	int i;

	i = mediane(a);
    while(ft_dlstsize(*a) > 0)
		presort6to100val(a,b,i);
	while(*b)
		pushlowpos(a,b);
}

int	nbchunk(int *arr, int size)
{
	int	med;
	int i;

	i = 0;
	if (size >= 0 && size <= 100)
	{
		while (i <= (size / 4))
			i++;
	}
	else if (size >= 101 && size <= 150)
	{
		while (i <= (size / 5))
			i++;
	}
	else if (size >= 151 && size <= 250)
	{
		while (i <= (size / 6))
			i++;
	}
	else if (size > 250)
	{
		while (i <= (size / 11))
			i++;
	}
	med = arr[i];
	return (med);
}



