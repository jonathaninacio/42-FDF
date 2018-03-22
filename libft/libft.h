/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:35:53 by joinacio          #+#    #+#             */
/*   Updated: 2017/03/31 06:46:43 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_cnt_char(char *str, char z);
int				ft_cnt_word(char *str, char z);
int				ft_decade(int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_ischarc(int c, char z);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_strcat(char *dest, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_putendl(char const *s);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
char			**ft_strsplit(char const *s, char c);
char			*ft_strtrim(char const *s);
void			ft_putstr(char const *s);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t			ft_strlen(const char *s);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
void			ft_putnbr(int n);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			ft_strdel(char **as);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strdup(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
int				ft_isspace(int c);
char			*ft_itoa(int n);
int				ft_sqrt(int nb);
void			ft_div_mod(int a, int b, int *div, int *mod);
int				ft_sort_params(int argc, char **argv);
void			ft_swap(int *a, int *b);
void			ft_cowabunga(void);
void			ft_waste_time(int w);
char			*ft_snr(char *str, char s, char r);
void			ft_puttab(char **tab);

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del) (void *, size_t));
void			ft_lstdel(t_list **alst, void (*del) (void*, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f) (t_list *alem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_lstlen(t_list *list);

# define BUFF_SIZE 1

int				get_next_line(int const fd, char **line);

#endif
