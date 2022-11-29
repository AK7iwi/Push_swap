/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/29 21:54:59 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Fcts utils*/

/*Ajouter un element a la stack*/

void init(t_listdc *l)
{
   l->first = NULL;
   l->last = NULL;
}

void *push_stack(t_listdc *l, int val)
{
	t_stack *new;
	new =  malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->value = val;
	new->prev = l->last;
	new->next = NULL;
	if(l->last) 
   		l->last->next = new;
	else 
		l->first = new;
	l->last = new;
	return(0);      
}

/*Free une pile */

void free_stack(dblist *l)
{
   t_stack *tmp;
   t_stack *pelem = l->first;
   while(pelem)
   {
     tmp = pelem;
     pelem = pelem->next;
     free(tmp);
   }
   l->first = NULL;
   l->last = NULL;
}