SRC := main.cpp \
		glad.c \

SRCS := $(notdir $(SRC))
OBJ_DIR := ./.objects
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o) $(SRCS:.c=.o))

INCLUDE := -I../../glad/include -I../../glfw/include
LDFLAGS := -L/home/hiroakik4/mypro/gl_programming/glfw/build/src `pkg-config --libs glfw3`  -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl

NAME := hello_window

CC := g++

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp, %c
	@-mkdir -p $(OBJ_DIR)
	$(CC) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	rm -rf $(NAME)

.PHONY: all clean
