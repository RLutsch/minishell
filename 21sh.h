/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 14:45:31 by rlutsch           #+#    #+#             */
/*   Updated: 2016/11/15 08:17:21 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _21SH_H
# define _21SH_H
# define BUF_SIZE = 50
# define BUFFSIZE 2048
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <signal.h>
# include <stdio.h>
# include <termios.h>
# include <termcap.h>

typedef struct	s_l
{
	char		t;
	struct s_l	*n;
}				t_l;

char	*ft_strcpy(char *dst, const char *src);
void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar(char c);
void	ft_dostuff(char c);
void	ft_echo(char **av);
char	*ft_cd(char **av);
int		ft_strlen(char const *c);
char	**ft_strsplit(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putstr(char *c);
int		get_next_line(int fd, char **l);
void	ft_command(char **av);
void	**ft_env();
int		ft_operator(char **av);
char	*ft_strdup(const char *s1);
int		ft_tablen(char **tab);
char	**ft_strsplit_init(char const *s, char c, int *v, size_t i);
void	ft_doflag(char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	*ft_memalloc(size_t size);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_getpwd(char *av, char *pwd);
char	*ft_getenv(const char *name);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void 	ft_free2d(char **arg);
int		ft_getchar_fd(int fd);
void	*ft_realloc(void *ptr, size_t n);

#endif
