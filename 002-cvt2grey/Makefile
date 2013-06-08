NAME = 002
IMGS = ../imgs

INPUT  = lena.jpg
OUTPUT = lena2.jpg

all:
	g++ -o $(NAME) $(NAME).cpp \
	`pkg-config --libs opencv` `pkg-config --cflags opencv`

clean:
	rm -f $(NAME) $(OUTPUT)

start:
	./$(NAME) $(IMGS)/$(INPUT) $(OUTPUT)
