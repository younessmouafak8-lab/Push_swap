NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
SRC = ft_atoi.c ft_lstadd_back.c ft_split.c algo/indexing.c algo/is_sorted.c \
	algo/length.c algo/position.c push_swap.c algo/subsort.c utils.c Moves/ft_push.c \
	Moves/ft_rotate.c Moves/ft_rrotate.c Moves/ft_swap.c algo/algo.c algo/total_moves.c \
	algo/algo_utils.c algo/find_target.c algo/cheapest.c algo/ft_execute.c algo/final_touches.c

OBJECTS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	@cc $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o : %.c $(HEADER)
	@cc $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJECTS)

fclean : clean
	@rm -f $(NAME)

re : fclean all