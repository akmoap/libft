/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:49:50 by mapter            #+#    #+#             */
/*   Updated: 2023/02/24 16:45:35 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);

size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
//int	ft_toupper(int c);
//int	ft_tolower(int c);
//char	*ft_strchr(const char *str, int c);
//char	*ft_strrchr(const char *str, int c);
//int	ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
//int	ft_memcmp(const void *s1, const void *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t len);
//int	ft_atoi(const char *str);
void	*ft_calloc(size_t number, size_t size);
//char	*ft_strdup(const char *s);

#endif
