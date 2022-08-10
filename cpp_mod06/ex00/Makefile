# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 18:04:17 by dmontema          #+#    #+#              #
#    Updated: 2022/08/08 18:04:19 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert

SRC_DIR	=	./src
SRCS	=	$(shell find $(SRC_DIR) -name "*.cpp" -execdir echo {} ";")

OBJ_DIR	=	./obj
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

DEPS	=	$(OBJS:.o=.d)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

# FORMATTING CODES
BOLD	= \033[1m
BLACK	= \033[30;1m
RED		= \033[31;1m
GREEN	= \033[32;1m
YELLOW	= \033[33;1m
BLUE	= \033[34;1m
MAGENTA	= \033[35;1m
CYAN	= \033[36;1m
WHITE	= \033[37;1m
RESET	= \033[0m
SPACE	= \e[50C


# **************************************************************************** #
#	RULES																	   #
# **************************************************************************** #

all: $(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
	@printf "$(BLUE)Linking objects to a binary file$(RESET)\r"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "$(SPACE)$(GREEN)[✓]\n$(RESET)"
	@printf "\t\t$(GREEN)$(BOLD)COMPLETE!$(RESET)\n\n"
	@printf "\t\t$(MAGENTA)Name of executable: $(NAME)$(RESET)\n\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | prep
	@printf "$(BLUE)$(BOLD)\rCompiling: $(CYAN)$(notdir $<)\r"
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@printf "$(SPACE)$(GREEN)[✓]\n$(RESET)"

prep:
	@mkdir -p $(OBJ_DIR)

clean:
	@printf "$(MAGENTA)Removing object files...\r$(RESET)"
	@rm -rf $(OBJS) $(OBJ_DIR)
	@printf "$(SPACE)$(GREEN)[✓]\n$(RESET)"

fclean: clean
	@printf "$(MAGENTA)Removing binary file...\r$(RESET)"
	@rm -rf $(NAME)
	@printf "$(SPACE)$(GREEN)[✓]\n$(RESET)\n"

re: fclean all
