#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>


typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

int     ft_atoi(const char *str);
void    bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isalnum(char *c);
int     ft_isalpha(char *c);
int     ft_isascii(char *c);
int     ft_isdigit(char *c);
int     ft_isprint(char *c);
char    *ft_itoa(int n);
void 	ft_lstadd_back(t_list **alst, t_list *new);
void    ft_lstadd_front(t_list **alst, t_list *new);
void    ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(*void));
t_list	*ft_lstlast(t_list lst);
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(*void));
t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *dest, int src, size_t n);
void    ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char sep);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
void    ft_striteri(char *s, void(*f)(unsigned int, char *));
size_t  ft_strlen(char *str);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strncmp(char *s1, char *s2, size_t n);
char    *ft_strnstr(char *s1, char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    ft_tolower(char c);
char    ft_toupper(char c);
