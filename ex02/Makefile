OBJS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC = c++

COMPILER_FLAGS = -Werror -Wextra -Wall -std=c++98 -g

OBJ_NAME = exec

$(OBJ_NAME) : $(OBJS)
	@$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean : 
	@rm $(OBJ_NAME)

re : clean $(OBJ_NAME)

.PHONY : clean
