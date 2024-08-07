/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_errors_check_dup.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/31 00:37:10 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *str1, char *str2)
{
/* 	if ((*(str1 + 1) == '0' && *(str2 + 1) == '0'))
		return (0); */
	if (*str1 == '+')
		str1++;
	if (*str2 == '+')
		str2++;
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	if ((*str1 == '\0' && *str2 != '\0') || (*str2 == '\0' && *str1 != '\0'))
		return (-1);
	if (*str1 != *str2)
		return (1);
	return (0);
}
