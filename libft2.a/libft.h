#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	ft_isalpha(int c);
int ft_isdigit(int c);
void   ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *b, int c, size_t len);
char *strchr(const char *s, int c);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int	ft_atoi(const char *str);







#endif
