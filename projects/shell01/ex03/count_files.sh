# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 10:05:35 by Jyniemit          #+#    #+#              #
#    Updated: 2024/09/19 13:23:03 by Jyniemit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
find . -name -not '*/.*' | wc -l
