/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:35:30 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/15 16:48:45 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int			ft_isalpha(int a);
int			ft_isdigit(int a);
int			ft_isalnum(int a);
int			ft_isascii(int a);
int			ft_isprint(int a);
size_t		ft_strlen(const char *a);
void		*ft_memset(void *ptr, int value, size_t num);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *destination, const void *source, size_t num_bytes);
void		*ft_memmove(void *destination, const void *source,
				size_t num_bytes);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char		*ft_strnstr(const char *str1, const char *str2, size_t len);
long			ft_atoi(const char *str);
void		*ft_calloc(size_t num, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start,
				size_t len);
void		*ft_memchr(const void *ptr, int value, size_t num);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_itoa(int n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(const char *s, char c);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **start, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **head, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **head, void (*del)(void *));
void		ft_lstiter(t_list *head, void (*f)(void *));
t_list		*ft_lstmap(t_list *head, void *(*f)(void *), void (*del)(void *));

#endif
