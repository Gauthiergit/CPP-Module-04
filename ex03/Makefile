# Program name
NAME    	= materia

# Compiler options
CXX     = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g

DIR_OBJ = obj/

# Colors
RESET_COLOR = \033[0m
BOLD = \033[1m
GREEN = \033[92m
BLUE = \033[94m

SRCS  = main.cpp \
        AMateria.cpp \
        Character.cpp \
        Cure.cpp \
        Ice.cpp  \
        MateriaSource.cpp


OBJ = $(patsubst %.cpp,$(DIR_OBJ)%.o,$(SRCS)

# Compiling project
$(NAME): $(OBJ)
	@echo "$(BOLD)$(BLUE)🛠️ 🚧     Compiling project...     🚧🛠️$(RESET_COLOR)"
	@echo "\n"
	@$(CXX) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BOLD)$(GREEN)🧊🩹   materia ready to use   🩹🧊$(RESET_COLOR)"

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)
	@echo "$(BOLD)$(GREEN)Created directory $(DIR_OBJ)$(RESET_COLOR)"

$(DIR_OBJ)%.o: %.cpp | $(DIR_OBJ)
	@echo "Compiling $< to $@"
	@$(CXX) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@echo "$(BOLD)$(BLUE)🧹🧼     Cleaning .o ...     🧼🧹$(RESET_COLOR)"
	@rm -rf $(DIR_OBJ)
	@echo "$(BOLD)$(GREEN)Removed directory $(DIR_OBJ)$(RESET_COLOR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "\n"
	@echo "$(BOLD)$(GREEN)🧹🧼     Cleaning finished     🧼🧹$(RESET_COLOR)"

re: fclean all

.PHONY: all clean fclean re
