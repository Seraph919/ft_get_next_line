#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
#endif

char    *get_next_line(int fd);
char    *ft_realloc(char *saved);
int     ft_strchr(const char *str, int search_str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *str1);
char	*ft_strncat(char *dest, char *src, size_t nb);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif

