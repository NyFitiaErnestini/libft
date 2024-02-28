/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:16:03 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 16:25:47 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_strlen(char const *str);
int			ft_strlcpy(char *dest, char *src, int size);
int			ft_strlcat(char *dest, char *src, unsigned int size);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		*ft_memchr(const void *s, int c, unsigned int n);
int			ft_memcmp(const void *s1, const void *s2, unsigned int n);
char		*ft_strchr(char *s, char c);
char		*ft_strdup(char *s);
void		*ft_calloc(unsigned int nmemb,unsigned int size);
int			ft_atoi(char *nptr);
int			ft_strncmp(char const *s1, char const *s2, unsigned int n);
char		*ft_strnstr(char *src, char *dest, unsigned int len);
void		ft_bzero(void *s, unsigned int n);
void		*ft_memset( void *s, int c, unsigned int n);
void		*ft_memmove(void *dest, void *src, unsigned int n);
void		*ft_memcpy(void *dest, void *src, unsigned int n);
char		*ft_strrchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int x, int fd);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
#endif
