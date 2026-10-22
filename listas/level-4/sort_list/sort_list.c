#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int sorted, swap;
    t_list *cur;

    sorted = 0;
    while (sorted == 0)
    {
        sorted = 1;
        cur = lst;
        while (cur->next != 0)
        {
            if (cmp(cur->data, cur->next->data) == 0)
            {
                sorted = 0;

                swap = cur->data;
                cur->data = cur->next->data;
                cur->next->data = swap;
            }
            cur = cur->next;
        }
    }
    return (lst);
}