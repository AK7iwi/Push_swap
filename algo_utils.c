/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:05:41 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 22:05:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *sort(int *arr, t_stack **a)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while(i < ft_dlstsize(*a))
	{
		j = i + 1;
		while(j < ft_dlstsize(*a))
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


int *array(t_stack **a, int start, int end)
{
	int *arr;
	int size;
	t_stack *tmp;

	tmp = *a;
	size = ft_dlstsize(*a);
	arr = malloc(sizeof(int) * (size));
	if(!arr)
		return(0);
	while(start < end)
	{
		arr[start] = tmp->value;
		tmp = tmp->next;
		start++;
	}
	return(arr);
}

int is_push_safe(t_stack **b, int num)
{
    t_stack *tmp;
	int i;
	tmp = *b;

	i = 0;
	while(tmp)
	{
		if(tmp->value > num)
			i++;
		tmp = tmp->next;
	}
	if(i < ft_dlstsize(tmp))
		return(0);
	return(1);
}

int scantop(t_stack **a, int val)
{
	t_stack *tmp;
	int pos;

	tmp = *a;
	while(tmp)
	{
		if(tmp->value < val)
		{
			pos = find_pos(tmp, tmp->value);
			break;
		}
		tmp = tmp->next;
	}
	return(pos);
}

int scanbottom(t_stack **a, int val)
{
	int *arr;
	int pos;
	int j;
	
	j = 0;
	arr = array(a, 0 , ft_dlstsize(*a));
	while(arr[j])
		j++;
	while(arr[j])
	{
		if(arr[j] < val)
		{
			pos = j;
			break;
		}
		j++;
	}
	pos = j;
	free(arr);
	return(ft_dlstsize(*a) - pos);
}