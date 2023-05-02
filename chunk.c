/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:05:41 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/02 02:07:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*array(t_stack **a)
{
	int		*arr;
	int		start;
	int		end;
	t_stack	*tmp;

	tmp = *a;
	start = 0;
	end = ft_dlstsize(*a);
	arr = malloc(sizeof(int) * (end));
	if (!arr)
		return (ft_dlstfree(a), NULL);
	while (start < end)
	{
		arr[start] = tmp->value;
		tmp = tmp->next;
		start++;
	}
	return (arr);
}

int	*sort(int *arr, t_stack **a)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < ft_dlstsize(*a))
	{
		j = i + 1;
		while (j < ft_dlstsize(*a))
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	limchunk(t_stack **l)
{
	int	lim;
	int	size;

	lim = 0;
	size = ft_dlstsize (*l);
	if (size >= 0 && size <= 50)
		lim = size / 2 ;
	else if (size > 50 && size <= 100)
		lim = size / 3;
	else if (size >= 101 && size <= 250)
		lim = size / 4;
	else if (size >= 251)
		lim = size / 5;
	return (lim);
}

int	limval(t_stack **a)
{
	int	lim;
	int	*arr;
	int	pos;

	arr = array(a);
	if (!arr)
		return (0);
	arr = sort(arr, a);
	pos = limchunk(a);
	lim = arr[pos - 1];
	free(arr);
	return (lim);
}
