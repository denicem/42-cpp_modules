NAME	=	claptrap

SRCS	=	src/ClapTrap.cpp src/main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

# COLOURS
RED		=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
CYAN	=	\033[0;36m
RESET	=	\033[m

# **************************************************************************** #
#	RULES																	   #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(CYAN)Installing ClapTrap...$(RESET)\n"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)\tCOMPLETE!$(RESET)\n"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)


clean:
	@rm -f $(OBJS)
	@printf "$(GREEN)Cleaning done.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all