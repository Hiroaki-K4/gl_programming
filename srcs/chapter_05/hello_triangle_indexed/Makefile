PARENT_DIR := /home/hiroakik4/mypro/
SRCS := main.cpp glad.c
INCLUDE := -I../../../glad/include -I../../../glfw/include
LDFLAGS := -L$(PARENT_DIR)gl_programming/glfw/build/src `pkg-config --libs glfw3` -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl
NAME := hello_triangle_indexed
CXX := g++

all: $(NAME)

$(NAME):
	$(CXX) $(SRCS) $(INCLUDE) $(LDFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re
