void swap(t_stack *a) 
{
	int val;
	
	val = a->value;
	a->value = a->next->value;
	a->next->value = val;
}

void sort(t_stack *a)
{
	t_stack *tmp;
	tmp = a->next;
	while(a)
	{
		while(tmp)
		{
			if(a->value > tmp->next->value)
				swap(a);
			tmp = tmp->next;
		}
		a = a->next;
	}
}

void sort(t_stack *a)
{
    t_stack *tmp;

    while (a->next)
    {
        tmp = a->next;
        while (tmp)
        {
            if (a->value > tmp->value)
                swap(a, tmp);
            tmp = tmp->next;
        }
        a = a->next;
    }
}

int find_low_pos_lowstack(t_stack *tmp, int sizechunk)
{
    t_stack *tmp2;
	int i;
	i = ft_dlstsize(tmp) / 2;  //ft_dlstsize(tmp) - sizechunk;
	
    while (i > 0)
    {
        tmp = tmp->next;
		i--;
    }
	while(sizechunk > 0)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		tmp2 = tmp2->next;
		sizechunk--;
	}
    return (ft_dlstsize(tmp) - find_low_pos(tmp2));
}

void pushlowpos(t_stack **a, t_stack **b)
{
	int pos1;
	int pos2;
	
	pos1 = find_low_pos_highstack(*a, ft_dlstsize(*a) / 2);
	pos2 = find_low_pos_lowstack(*a, ft_dlstsize(*a) / 2);
    if(pos1 <= pos2)
    {
        while(pos1 > 1)
		{
			ra(a);
			pos1--;
		}
    }
    while(pos2 != 0)
	{
        rra(a);
		pos2--;
	}
	rra(a);
	pb(a, b);
}




void sortb(t_stack **b)
{
	int top;
	int second;
	top = (*b)->value;
	second = (*b)->next->value;
	if(top < second)
		sb(*b);
}

int chunksize(t_stack **a)
{
	int i;
	int nbchunk;
	
	i = ft_dlstsize(*a);
	if(i > 5 && i <= 10)
		nbchunk = 2;
	else if (i > 10 && i < 50)
		nbchunk = 4;
	else if(i >= 50 && i <= 100)
		nbchunk = 5;
	else if (i > 100)
		nbchunk = 10;
	return(nbchunk);
}

int find_low_pos_highstack(t_stack *tmp, int sizechunk)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(sizechunk > 0)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
		sizechunk--;
    }
    return(pos);
}

void swap(t_stack *a, t_stack *b)
{
    int tmp = a->value;
    a->value = b->value;
    b->value = tmp;
}