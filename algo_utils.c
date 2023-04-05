/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:05:41 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/05 02:42:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int limchunk(t_stack **a)
{
	int lim;
	int size;

	lim = 0;
	size = ft_dlstsize(*a);
	if (size >= 6 && size <= 50)
		lim = size / 5;
	else if (size >= 51 && size <= 100)
		lim = size / 5;
	else if (size >= 101 && size <= 200)
		lim = size / 10;
	else if (size > 200)
		lim = size / 11;
	return(lim);
}

int limval(t_stack **a, int pos)
{
	int lim;
	int *arr;

	arr = array(a,0, ft_dlstsize(*a));
	arr = sort(arr,a);
	lim = arr[pos - 1];
	free(arr);
	return(lim);
}

