NAME = push_swap
NAME_BONUS = checker
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
HEADER_BONUS = checker_bonus.h
SRC = ft_atoi.c ft_lstadd_back.c ft_split.c algo/indexing.c algo/is_sorted.c \
	algo/length.c algo/position.c push_swap.c algo/subsort.c utils.c Moves/ft_push.c \
	Moves/ft_rotate.c Moves/ft_rrotate.c Moves/ft_swap.c algo/algo.c algo/total_moves.c \
	algo/algo_utils.c algo/find_target.c algo/cheapest.c algo/ft_execute.c algo/final_touches.c

BONUS_SRC = bonus/checker_bonus.c bonus/get_next_line_bonus.c bonus/get_next_line_utils_bonus.c \
		bonus/ft_atoi_bonus.c bonus/ft_execute_moves_bonus.c bonus/ft_lstadd_back_bonus.c bonus/ft_push_bonus.c \
		bonus/ft_result_bonus.c bonus/ft_rotate_bonus.c bonus/ft_rrotate_bonus.c bonus/ft_split_bonus.c bonus/ft_swap_bonus.c \
		bonus/indexing_bonus.c bonus/is_sorted_bonus.c bonus/utils_bonus.c

OBJECTS = $(SRC:.c=.o)

BONUS_OBJECTS = $(BONUS_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	cc $(CFLAGS) -o $(NAME) $(OBJECTS)

bonus : $(BONUS_OBJECTS)
	cc $(CFLAGS) -o $(NAME_BONUS) $(BONUS_OBJECTS)

$(OBJECTS) : $(HEADER)
$(BONUS_OBJECTS) : $(HEADER_BONUS)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)

re : fclean all