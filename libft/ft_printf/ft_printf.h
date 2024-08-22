/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:58:58 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 12:58:59 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_putstr(char *str);
int	ft_putchr(int c);
int	ft_putnbr(int nb);
int	ft_hex(unsigned int n, char ch);
int	ft_pointer(void *ptr);
int	recursion(int n);
int	ft_unbr(unsigned int nb);
int	ft_printf(const char *str, ...);

#endif