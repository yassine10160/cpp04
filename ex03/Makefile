NAME=Interface
CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
OBJDIR = .obj
SRCS= src/AMateria.cpp src/Ice.cpp src/Cure.cpp src/Character.cpp src/MateriaSource.cpp src/main.cpp 
HEADERS= include/AMateria.hpp include/ICharacter.hpp include/Character.hpp include/Cure.hpp include/Ice.hpp include/IMateriaSource.hpp include/MateriaSource.hpp
OBJS=$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
all: $(NAME)
$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
$(OBJDIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(OPTS) -c $< -o $@
clean:
	rm -rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re%