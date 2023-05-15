NAME = Form

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

SRC_FILES 	:= $(wildcard $(SRC_DIR)*.cpp)
OBJ_FILES  	:= $(patsubst $(SRC_DIR)%.cpp,%.o,$(SRC_FILES))

CC = g++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -Wshadow
SRC      	= 	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@ rm -rf $(OBJ)
		@echo "Program compiled";

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<


clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "Deleting all objects from /..."; else \
	echo "No objects to remove from /."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "Deleting from /..."; else \
	echo "No Executable to remove from /."; \
	fi;

run : all
	./$(NAME)
re : fclean all