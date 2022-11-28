/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/28 19:27:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Fcts utils*/

/*Ajouter un element a la stack*/

t_stack push(t_stack **p, int val)
{
        t_stack *element;
		element = malloc(sizeof(t_stack));
        if(!element)
			return(*element); 
        element->value = val;
        element->prev = *p;
        *p = element;
		return(**p);
}

/*Free une pile */

void free_stack(t_stack **p)
{
	t_stack *tmp;
    while(*p)
    {
		tmp = (*p)->prev;
        free(*p);
        *p = tmp;
    }
}