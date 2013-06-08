NAME = 003
IMGS = ../imgs

INPUT  = lena.jpg

all:
	g++ -o $(NAME) $(NAME).cpp \
	`pkg-config --libs opencv` `pkg-config --cflags opencv`


clean:
	rm -f $(NAME) *.jpg

start:
	./$(NAME) $(IMGS)/$(INPUT)
