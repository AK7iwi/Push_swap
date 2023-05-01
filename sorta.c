/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorta.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/01 22:04:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	scantop(t_stack **a, int val)
{
	t_stack	*tmp;
	int		pos;

	tmp = *a;
	pos = 1;
	while (tmp)
	{
		if (tmp->value < val)
			break ;
		tmp = tmp->next;
		pos++;
	}
	return (pos);
}

int	scanbottom(t_stack **a, int val)
{
	int		*arr;
	int		pos;
	int		j;

	j = ft_dlstsize(*a) - 1 ;
	arr = array(a);
	while (arr[j])
	{
		if (arr[j] < val)
			break ;
		j--;
	}
	pos = j;
	free(arr);
	return (ft_dlstsize(*a) - pos);
}

void	pushtop(t_stack **a, int pos)
{
	while (pos > 1)
	{
		ra(a);
		pos--;
	}
}

void	pushbottom(t_stack **a, int pos)
{
	while (pos > 0)
	{
		rra(a);
		pos--;
	}
}

void	presort6to100val(t_stack **a, int val)
{
	int		pos1;
	int		pos2;

	pos1 = scantop(a, val);
	pos2 = scanbottom(a, val);
	if (pos1 <= pos2)
		pushtop(a, pos1);
	else
		pushbottom(a, pos2);
}
