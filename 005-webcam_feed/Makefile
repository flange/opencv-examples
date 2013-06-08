NAME = 005

all:
	g++ -o $(NAME) $(NAME).cpp \
	`pkg-config --libs opencv` `pkg-config --cflags opencv`


clean:
	rm -f $(NAME)
start:
	./$(NAME)
