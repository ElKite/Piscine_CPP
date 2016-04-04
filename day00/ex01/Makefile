#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    created: 2016/04/04 12:56:41 by vtarreau          #+#    #+#              #
#    Updated: 2016/04/04 16:51:39 by vtarreau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
NAME = XXPhoneBook2000XX
CFLAGS = -Wall -Wextra -Werror
OBJDIR = obj/
SRCS = main.cpp \
		Contact.class.cpp \
		PhoneBook.class.cpp

OBJS = $(addprefix $(OBJDIR),$(subst .cpp,.o,$(SRCS)))

.PHONY: all clean fclean re proper

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

$(OBJS): | $(OBJDIR)

$(OBJDIR)%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(OBJDIR):
	@if [ ! -d "$(OBJDIR)" ]; then \
		mkdir $(OBJDIR);\
		fi

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

proper: all clean

re: fclean all