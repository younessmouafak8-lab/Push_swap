
#include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include "push_swap.h"

int	main(void)
{
	int number = 20;
	Stack *p;
	p = malloc(sizeof(Stack *));
	p->d = 10;
	p->next = NULL;
	ft_lstadd_front(&p,number);
	while (p)
	{
		ft_printf("%d\n", p->d);
		p = p->next;
	}
}
