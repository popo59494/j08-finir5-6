/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:29:32 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/19 16:53:24 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOTO
#include <unistd.h>
#endif

#ifdef ft_is_even
{
if (nbr%2 == 1)
	return (1);
else
	return (0);
}
#endif

#define t_bool int
#define EVEN(nbr) (nbr%2) == 0
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
