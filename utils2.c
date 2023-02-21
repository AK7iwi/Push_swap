/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:45:29 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/21 19:45:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Initialiser la dliste*/

void ft_dlstinit(t_listdc *l)
{
   l->first = NULL;
   l->last = NULL;
}

int is_sorted(t_listdc *l)
{
	t_stack *pelem;
	while (l->first && l->first->next)
	{
		pelem = l->first;
		l->first = l->first->next;
        if (pelem->value > l->first->value)
            return(1);
	}
    l->last = NULL;
    return(0);
}