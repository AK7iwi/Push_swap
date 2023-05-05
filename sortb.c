/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:08:24 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/05 20:55:32 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	postop(t_stack **b, int pos)
{
	int		pos1;
	int		pos2;

	pos1 = pos;
	pos2 = ft_lstsize(*b) - pos1;
	if (pos1 <= ft_lstsize(*b) / 2)
	{
		while (pos1 > 1)
		{
			rb(b);
			pos1--;
		}
	}
	else
	{
		while (pos2 >= 0)
		{
			rrb(b);
			pos2--;
		}
	}
}

// void	optipush(t_stack **b)
// {
// 	int		*arrayb;
// 	int		val;

// 	if ((*b) == NULL || (*b)->next == NULL)
// 		return ;
// 	arrayb = array(b);
// 	val = limval(b);
// 	if (arrayb[0] < arrayb[1])
// 		sb(*b);
// 	else if ((*b)->value < val)
// 	{
// 		while ((*b)->value < val)
// 			rb(b);
// 	}
// 	free(arrayb);
// }
