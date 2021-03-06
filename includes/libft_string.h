#ifndef _FT_STRING
#define _FT_STRING
#include <unistd.h>
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
char ft_strncat(char *dest, const char *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnchr(const char *s, int c, size_t n);
char *ft_strdup(const char *s);
char *ft_strndup(const char *s, size_t n);
#endif
