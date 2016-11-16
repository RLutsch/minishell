#include "21sh.h"

char *ft_getenv(const char *name)
{
	extern char	**environ;
    char        *tmp;
	int			i;
    int         j;

	i = 0;
    j = 0;
	i = ft_tablen(environ);
	while(--i)
	{
        if (ft_strncmp(name, environ[i], ft_strlen(name)) == 0)
        {
            tmp = malloc(sizeof((ft_strlen(environ[i])-ft_strlen(name)) - 1));
            tmp = ft_memcpy(tmp, &environ[i][ft_strlen(name) + 1], (ft_strlen(environ[i]) - ft_strlen(name) - 1));
            return (tmp);
        }
	}
}