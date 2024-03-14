NAME = Fixed
SRC_FILE = main.cpp Fixed.cpp
OBJ_DIR = .objet
OBJ_FILE = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_FILE))
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
RM = rm -rf
PP = g++

BLUE = \033[0;34m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all : $(NAME)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW) creat obje_directory$(RESET)"

$(NAME) : $(OBJ_FILE)
	@$(PP) $(CPPFLAGS) $(SRC_FILE) -o $(NAME)
	@echo "$(BLUE) make cpp02/ex00$(RESET)"

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	@$(PP) $(CPPFLAGS) -c $< -o $@

fclean : clean
	@$(RM) $(NAME)
	@$(RM) $(OBJ_DIR)
	@echo "$(RED) clean cpp02/ex00$(RESET)"

clean :
	@$(RM) $(OBJ_FILE)

re : fclean $(NAME)

.PHONY : all fclean clean re
