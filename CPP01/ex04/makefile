NAME = replace
SRC_FILE = main.cpp
OBJ_FILE = $(@SRC_FILE:.cpp=.o)
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
RM = rm -rf
PP = g++

BLUE = \033[0;34m
RED = \033[0;31m

all : $(NAME)

$(NAME): $(OBJ_FILE)
	@$(PP) $(CPPFLAGS) $(SRC_FILE) -o $(NAME)
	@echo "$(BLUE)make cpp01/ex04"

clean :
	@$(RM) $(OBJ_FILE)

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean cpp01/ex04"

re : fclean $(NAME)

.PHONY : all clean fclean re
