
#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;


int ft_check(int val, t_list *node)
{
    while(node)
    {
        if(val == node->data)
            return(1);
        node = node->next;
    }
    return(0);
}

int    ft_repeat(t_list *head)
{
    int i;
    t_list  *current;

    current = head;
    while(current)
    {
        if(current->next == NULL)
            break ;
        i = ft_check(current->data, current->next);
        if(i == 1)
            return(1);
         current = current->next;
    }
    return(0);
}