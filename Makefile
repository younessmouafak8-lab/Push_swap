all = $(NAME)
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
HEADER = push_swap.h
SRC = ft_atoi.c ft_lstadd_back.c ft_split.c indexing.c is_sorted.c \
	length.c position.c push_swap.c subsort.c utils.c Moves/ft_push.c \
	Moves/ft_rotate.c Moves/ft_rrotate.c Moves/ft_swap.c algo.c
OBJECTS = $(SRC:.c = .o)

all : $(OBJECTS)
	cc $(CFLAGS) -o $(all) $(OBJECTS)
%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $<
clean :
	rm -f $(OBJECTS)
fclean : clean
	rm -f $(all)
re : fclean all
