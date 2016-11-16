#include "21sh.h"

char *ft_getenv(const char *name)
{
	extern char	**environ;
    char        *tmp;
	int			i;
 
	i = 0;
 	i = ft_tablen(environ);
	while(--i)
	{
        if (ft_strncmp(name, environ[i], ft_strlen(name)) == 0)
        {
            tmp = environ[i];
            while (*tmp++ != '=')
                ;
            return (tmp);
        }
	}
    return (0);
}

