NAME = Trap
SRC_FILE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_FILE = $(patsubst %.cpp,%.o,$(SRC_FILE))
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
PP = g++
OBJ_DIR = .objet
RM = rm -rf

BLUE = \033[0;34m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJ_FILE)
	@$(PP) $(CPPFLAGS) $(SRC_FILE) -o $(NAME)
	@mkdir -p $(OBJ_DIR)
	@mv $(OBJ_FILE) $(OBJ_DIR)
	@echo "$(BLUE)make cpp03/ex01$(RESET)"

%.o:%.cpp
	@$(PP) $(CPPFLAGS) -c $< -o $@

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean cpp03/ex01$(RESET)"

clean :
	@$(RM) $(OBJ_DIR)

re : fclean $(NAME)

.PHONY : all fclean clean re
