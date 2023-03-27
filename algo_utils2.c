/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:22:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 22:34:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valchunk(int *arr, int size)
{
	int	med;
	int i;

	i = 0;
	if (size >= 1 && size <= 50)
		i = size / 2;
	else if (size >= 51 && size <= 100)
		i = size / 3;
	else if (size >= 101 && size <= 200)
		i = size / 4;
	else if (size > 200)
		i = size / 5;
	med = arr[i - 1];
	return(med);
}

int medianeval(t_stack **a)
{
	int mid;
	int *arr;

	arr = array(a,0, ft_dlstsize(*a));
	arr = sort(arr,a);
	mid = valchunk(arr,ft_dlstsize(*a));
	free(arr);
	return(mid);
}

int	poschunk(int size)
{
	int i;

	i = 0;
	if (size >= 1 && size <= 50)
		i = size / 2;
	else if (size >= 51 && size <= 100)
		i = size / 3;
	else if (size >= 101 && size <= 200)
		i = size / 4;
	else if (size > 200)
		i = size / 5;
	return(i);
}

int medianepos(t_stack **a)
{
	int mid;
	int *arr;

	arr = array(a,0, ft_dlstsize(*a));
	arr = sort(arr,a);
	mid = poschunk(ft_dlstsize(*a));
	free(arr);
	return(mid);
}