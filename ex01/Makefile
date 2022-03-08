CC=clang++

FLAGS= -Wall -Wextra -Werror -std=c++98

NAME= PhoneBook

SRC= PhoneBook.cpp Repertoire.cpp Contact.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)