NAME			:= philo

SRC_DIR			:= src
OBJ_DIR			:= obj
SRC_UTILS_DIR	:= utils
OBJ_UTILS_DIR	:= obj/utils

FILES			:= main

UTILS_FILES		:= $(addprefix $(SRC_UTILS_DIR)/, $(UTILS_FILES))
			
FILES			+= $(UTILS_FILES)

SRCS			:= $(addsuffix .c, $(addprefix $(SRC_DIR)/, $(FILES)))

OBJS			:= $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(FILES)))

CC				:= gcc

CFLAGS			:= -Wall -Wextra -Werror -pthread

INCLUDE			:= -I .

RM				:= rm -f

all:	$(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

$(NAME):	$(OBJS)
	$(CC) $^ $(CFLAGS) $(LIB) -o $@ 

$(OBJS):	$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/$(SRC_UTILS_DIR):
	mkdir -p $@

.PHONY: all clean fclean re