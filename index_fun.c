#include    "push_swap.h"

int     min_value(t_list **list)
{
    int     min;
    t_list  *tmp;
    t_list  *min_node;

    tmp = *list;
    min_node = *list;
    min = min_node -> content;
    while (tmp && tmp -> index == -1)
    {
        if (tmp -> content < min)
            {
                min_node = tmp;
                min = min_node -> content;
            }
        tmp = tmp -> next;
    }
    min_node -> index = min_node -> index + 1;
    return min_node->content;
}

static  t_list  *min_node(t_list **list)
{
    int     min;
    t_list  *tmp;
    t_list  *min_node;

    tmp = *list;
    min_node = *list;
    min = 0;
    while (tmp)
    {
        if (((tmp -> index) == -1) && (!min || tmp -> content < min_node -> content) )
            {
                min_node = tmp;
                min = 1;
            }
        tmp = tmp -> next;
    }
    return min_node;
}
void    giving_index(t_list    **list)
{
    int len;
    t_list  *tmp_min_node;
    int index;

    index = 0;
    len = ft_lstsize(*list);
    while (len--)
    {
        tmp_min_node = min_node(list);
        tmp_min_node -> index = index++;   
    }
}