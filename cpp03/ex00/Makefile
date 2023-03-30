NAME = ClapTrap
CC = g++ 
SOURCE = $(wildcard *.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))
FLAG = -Wall -Wextra -Werror -std=c++98

all: $(OBJECT)
	$(CC) $(FLAG) $(OBJECT) -o $(NAME)
	$(MAKE) clean

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all