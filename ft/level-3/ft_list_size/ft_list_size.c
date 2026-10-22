#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	cont;

	cont = 0;
	while (begin_list)
	{
		cont++;
		begin_list = begin_list->next;
	}
	return (cont);
}
