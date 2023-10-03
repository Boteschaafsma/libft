/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:48:15 by bootjan           #+#    #+#             */
/*   Updated: 2023/10/03 20:03:37 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t			ft_strlen(const char *s);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
char			*ft_strdup(const char *s1);
unsigned long	ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_isalpha(char c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(const char *s);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *y, const char *x, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strmapi(char *s, char (*f)(unsigned int, char));
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strjoin(const char *s1, const char *s2);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strchr(const char *s, int c);
char			**ft_split(char const *s, char c);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putchar_fd(char c, int fd);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);

#endif
