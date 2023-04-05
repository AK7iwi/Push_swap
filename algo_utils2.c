/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:22:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/05 03:11:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int scantop(t_stack **a,int lim, int val)
{
	t_stack *tmp;
	int pos;

	tmp = *a;
	pos = 1;
	while(tmp && lim > 0)
	{
		if(tmp->value < val)
			break;
		tmp = tmp->next;
		lim--;
		pos++;
	}
	return(pos);
}

int scanbottom(t_stack **a, int lim, int val)
{
	int *arr;
	int pos;
	int j;
	
	j = ft_dlstsize(*a) ;
	arr = array(a, 0 , j);
	j = j - 1;
	while(arr[j] && lim > 0) 
	{
		if(arr[j] < val)
			break;
		j--;
		lim--;
	}
	pos = j + 1;
	free(arr);
	return(ft_dlstsize(*a) - pos + 1); 
}
