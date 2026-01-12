/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:08:05 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/11 12:51:36 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct stack
{
	int				d;
	int				index;
	int				position;
	struct stack	*next;
}t_Stack;

void	*ft_lstadd_back(t_Stack **lst, int content);
long	ft_atoi(const char *str, char **strs, t_Stack *p);
char	**ft_split(char const *s, char c);
void	ft_free_list(t_Stack	**p);
void	ft_swap(t_Stack	**p);
void	ft_push(t_Stack	**a, t_Stack **b);
void	ft_rotate(t_Stack **a);
void	ft_rrotate(t_Stack **a);
void	ft_index(t_Stack	*a);
int		is_sorted(t_Stack	*a);
void	ft_free_list(t_Stack	**p);
void	ft_exit(t_Stack *p, char **str);
void	*ft_free(char **p);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
int		ft_strchr(char *s, int c, char **to_store);
char	*ft_strjoin(char *s1, char *s2, int	*failed);
char	*ft_substr(char *s, unsigned int start, char *str);
char	*ft_strdup(char *s);
char	*my_line(char *str, char *buffer);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_execute_moves(char *str, t_Stack **a, t_Stack **b);
void	ft_checker_exit(t_Stack **a, t_Stack **b, char *str);
void	ft_result(t_Stack *a, t_Stack *b, char *arg);

#endif