PARENT_DIR := /home/hiroakik4/mypro/
SRCS := main.cpp glad.c Shader.cpp Mesh.cpp Model.cpp
INCLUDE := -I../../../glm -I../../../glad/include -I../../../glfw/include -I.
LDFLAGS := -L$(PARENT_DIR)gl_programming/glfw/build/src -L$(PARENT_DIR)gl_programming/assimp/lib `pkg-config --libs glfw3` -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl
NAME := model
CXX := g++

all: $(NAME)

$(NAME):
	$(CXX) $(SRCS) $(INCLUDE) $(LDFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re
