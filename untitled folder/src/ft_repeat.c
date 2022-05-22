
#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;


int ft_check(int data, t_list *node)
{
    while(node)
    {
        if(data == node->data);
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
       // printf("%d", current->data);
        if(current->next == NULL)
            break ;
        i = ft_check(current->data, current->next);
        if(i == 1)
        {
            printf("wtf");
            return(1);
        }

        // if(current->data == current->next->data)
        //     return(1);
        // current = current->next;
    }
    return(0);
}