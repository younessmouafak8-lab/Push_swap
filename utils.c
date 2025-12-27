#include "push_swap.h"

void	*ft_free(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
	return (NULL);
}