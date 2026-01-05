NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
SRC = ft_atoi.c ft_lstadd_back.c ft_split.c indexing.c is_sorted.c \
	length.c position.c push_swap.c subsort.c utils.c Moves/ft_push.c \
	Moves/ft_rotate.c Moves/ft_rrotate.c Moves/ft_swap.c algo.c total_moves.c \
	algo_utils.c find_target.c cheapest.c ft_execute.c final_touches.c

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