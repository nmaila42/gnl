# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run1.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaila <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 15:45:45 by nmaila            #+#    #+#              #
#    Updated: 2019/07/12 15:46:34 by nmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main1.o -c main1.c
clang -o test_gnl main1.o get_next_line.o -I libft/includes -L libft/ -lft
