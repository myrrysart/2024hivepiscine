/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:11:15 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/23 21:27:19 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    FT_BOOLEAN_H
# define    FT_BOOLEAN_H
# define    TRUE 1
# define    FALSE 0
# define    EVEN_MSG "I have an even number of arguments.\n"
# define    ODD_MSG "I have an odd number of arguments.\n"
# define    SUCCESS 0
# define    EVEN(nbr) ((nbr  % 2) == 0)
# include <unistd.h>

typedef int	t_bool;
#endif
