#include    "push_swap.h"

void  index_to_min(t_list **list)
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
            min_node = tmp;
        tmp = tmp -> next;
    }
    min_node -> index = min_node -> index++;
}
t_list  *giving_index(t_list    *list)
{
    int len;

    len = ft_lstsize(list);
    while (len)
    {
        index_to_min(list);
        len--;
    }
}